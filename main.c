#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>      /*for abs() function*/
#include<string.h>
#include"dtmanip.h"	/*includes the declaration of the useful functions*/

int main()
{
	int choice, result;
	char date[11], date1[11], date2[11];
	while(1) {	/*Menu regarding Date manipulation*/
		printf("\n1: CHECK VALIDITY OF DATE\n2: COMPARING 2 DATES\n3: EXTRACT DATE, MONTH AND YEAR FROM A DATE\n");
		printf("4: TO CALCULATE JULIAN NUMBER\n5: CHECK FOR LEAP YEAR\n6: CALCULATE THE DIFFERENCE (IN DAYS) BETWEEN 2 DATES\n\n");
		printf("Enter your choice\n");
		scanf("%d", &choice);

		/*checking user input*/
		/*if(choice>6 && choice<1) {
		printf("Invalid user input\n");
		exit(-1);
		}*/

		switch(choice) {
		default:	/*checking user input*/
			printf("Invalid user input\n");
			exit(-1);
		case 1:		/*Date validity check*/
			printf("\nYou chose to check validity\n");
			printf("Enter a date (dd/mm/yyyy) to check it's validity\n");
			__fpurge(stdin);
			scanf("%s",date);

			if(isValid(date))
				printf("Date is valid\n");
			else printf("Date is not valid\n");
			break;
		case 2:		/*Comparison between 2 dates*/
			printf("\nYou chose to compare 2 dates\n");
			printf("Enter first date (dd/mm/yyyy) \n");
			scanf("%s",date1);

			if( !isValid(date1) )
                        	printf("Date1 is not valid\n");

			printf("Enter second date (dd/mm/yyyy) \n");
			scanf("%s",date2);
			
			if( !isValid(date2) )
                        	printf("Date2 is not valid\n");

			result = cmpDate(date1, date2);
			if(!result)
				printf("\nBoth the dates are exactly same\n");
			else {
				if(result<0)
				printf("\ndate1 is smaller than date2\n");
				if(result>0)
				printf("\ndate1 is greater than date2\n");
			}
			break;
		case 3:		/*Extraction (or seperation) of date, month and year from given date*/
			printf("\nYou chose to extract date, month and year from given date\n");
			printf("Enter a date (dd/mm/yyyy) from which the date, month and year is to be extracted\n");
			scanf("%s",date);

			if( !isValid(date) ) {
				printf("Date is not valid\n");
				exit(-1);
			}

			//splitDate(date, &dd, &mm, &yyyy);
			printf("day = %d month = %d year = %d\n", dd, mm, yyyy);
			break;
		case 4:		/*Calculate Julian number*/
			printf("\nYou chose to calculate Julian number\n");
			printf("Enter a date (dd/mm/yyyy) for which Julian number is to be calculated\n");
			scanf("%s",date);

			if( !isValid(date) ) {
				printf("Date is not valid\n");
				exit(-1);
			}
			
			//splitDate(date, &dd, &mm, &yyyy);
			printf("Julian number for the given date = %d\n", julian(dd, mm, yyyy) );
			break;
		case 5:		/*Leap year check*/
			printf("\nYou chose to check for Leap year\n");
			printf("Enter a date (dd/mm/yyyy) to check if it is a leap year\n");
			scanf("%s",date);
			
			if( !isValid(date) ) {
				printf("Date is not valid\n");
				exit(-1);
			}

			//splitDate(date, &dd, &mm, &yyyy);
			if(isLeap(yyyy))
				printf("It's a leap year\n");
			else printf("No, it is not a leap year\n");
			break;
		case 6:		/*Difference between 2 dates in units of days*/
			printf("\nYou chose to calculate difference between 2 dates in units of days\n");
			printf("Enter first date (dd/mm/yyyy) \n");
			scanf("%s",date1);

			if( !isValid(date1) ) {
				printf("Date1 is not valid\n");
				exit(-1);
			}

			printf("Enter second date (dd/mm/yyyy) \n");
			scanf("%s",date2);

			if( !isValid(date2) ) {
				printf("Date2 is not valid\n");
				exit(-1);
			}

			printf("Difference between the 2 dates (in days) = %d\n", diffDays(date1, date2) );
			break;
		}
	}
}

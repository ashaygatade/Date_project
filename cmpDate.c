		/*Function to compare the 2 dates. RETURN VALUE: same as strcmp*/
							/*  1:	date1 > date2 \
							 * -1:	date1 < date2 \
							 *  0:	date1 == date2 \
							 */
//int cmp(int , int );		/*this might also be written in dtmanip.h file also*/

#include"dtmanip.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmpDate(char *date1, char *date2)
{
	/*if( !isValid(date1) ) {
		printf("date1 is not valid\n");
		exit(-1);
	}
	if( !isValid(date2) ) {
		printf("date2 is not valid\n");
		exit(-1);
	}*/
	//splitDate(date1, &dd1, &mm1, &yyyy1);	/*isValid(date1) has alreadt split the date, so calling splitDate again should not be done*/
	//splitDate(date2, &dd2, &mm2, &yyyy2);

	int res = cmp(yyyy1, yyyy2);
	if(res == 1) {
		return 1;
	}
	else if(res == -1) {
		return -1;
	}
	else {
		res = cmp(mm1, mm2);
		if(res == 1) {
			return 1;
		}
		else if(res == -1) {
			return -1;
		}
		else {

		res = cmp(dd1, dd2);
		if(res == 1) {
		return 1;
		}
		else if(res == -1) {
		return -1;
		}
		else return 0;
		}
	}
}

int cmp(int num1, int num2)
{
	if(num1 > num2)
		return 1;
	else if(num1 < num2)
		return -1;
	else return 0;
}

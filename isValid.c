					/*function to check if the date given from user is Valid or not*/
//#include<stdio.h>

/*int isValid(char *);*/
/*Return value: SUCCESS = 1, FAILURE = 0*/

#include"dtmanip.h"

int isValid(char *date)
{
	splitDate(date, &dd, &mm, &yyyy);
	if(dd>=1 && dd>=31 && mm>=1 && mm<=12 && yyyy>0) {
		switch(mm) {
		case 1:	/*January*/
			return 1;
		case 2:	/*February*/
			if( isLeap(yyyy) ) {	/*check for leap year*/
			if( dd>=1 && dd <=29 )
			return 1;
			else return 0;

			}

			if( dd>=1 && dd <=28 )	/*if it not a leap year*/
			return 1;
			else return 0;

		case 3:	/*March*/
			return 1;
		case 4:	/*April*/
			if(dd==31)
			return 0;
		case 5:	/*May*/
			return 1;
		case 6:	/*June*/
			if(dd==31)
			return 0;
		case 7:	/*July*/
			return 1;
		case 8:	/*August*/
			return 1;
		case 9:	/*September*/
			if(dd==31)
			return 0;
		case 10: /*October*/
			return 1;
		case 11: /*November*/
			if(dd==31)
			return 0;
		case 12: /*December*/
			return 1;
		}
	}
	else {
		return 0;			/*failure*/
	}
}

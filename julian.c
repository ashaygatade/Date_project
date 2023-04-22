		/*function to calculate Julian number from a given date. \
		 * Julian date example: 2nd Feb: Julian no = 33; \
		 * 			3rd March: Julian no = 31 + 28 (29 in case of leap year) + 3 \
		 */
#include"dtmanip.h"


int julian(int dd, int mm, int yyyy)
{
	int res = dd;
	switch(mm-1) {
		case 11:
			res+=30;
		case 10:
			res+=31;
		case 9:
			res+=30;
		case 8:
			res+=31;
		case 7:
			res+=31;
		case 6:
			res+=30;
		case 5:
			res+=31;
		case 4:
			res+=30;
		case 3:
			res+=31;
		case 2:
			if( isLeap(yyyy) )
			res+=29;
			else res+=28;
		case 1:
			res+=31;
	}
	return res;
}

/*Decoding the date from Julian number*/
void revJulian(int julian_num, int yyyy, int *dd, int *mm)
{
	int month; *dd = 0, *mm = 0;
	for(month = 1; month <= 12; month++) {
	
	switch(month) {
		case 1:
			if(julian_num > 31) {
			(*mm)++;
			julian_num -= 31;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 2:
			if( isLeap(yyyy) ) {	/*leap-year*/
			
			if(julian_num > 29) {
			(*mm)++;
			julian_num -= 29;
			}
			else {
			*dd = julian_num;
			return;
			}

			}
			else {			/*non leap-year*/

			if(julian_num > 28) {
			(*mm)++;
			julian_num -= 28;
			}
			else {
			*dd = julian_num;
			return;
			}

			}
		case 3:
			if(julian_num > 31) {
			(*mm)++;
			julian_num -= 31;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 4:
			if(julian_num > 30) {
			(*mm)++;
			julian_num -= 30;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 5:
			if(julian_num > 31) {
			(*mm)++;
			julian_num -= 31;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 6:
			if(julian_num > 30) {
			(*mm)++;
			julian_num -= 30;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 7:
			if(julian_num > 31) {
			(*mm)++;
			julian_num -= 31;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 8:
			if(julian_num > 31) {
			(*mm)++;
			julian_num -= 31;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 9:
			if(julian_num > 30) {
			(*mm)++;
			julian_num -= 30;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 10:
			if(julian_num > 31) {
			(*mm)++;
			julian_num -= 31;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 11:
			if(julian_num > 30) {
			(*mm)++;
			julian_num -= 30;
			}
			else {
			*dd = julian_num;
			return;
			}
		case 12:
			if(julian_num > 31) {
			(*mm)++;
			julian_num -= 31;
			}
			else {
			*dd = julian_num;
			return;
			}
	}
	}
}

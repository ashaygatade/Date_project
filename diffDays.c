		/*Difference between 2 dates in days*/

#include"dtmanip.h"	/*for global variables like dd1, dd2, etc and declaration of splitDate() function*/
#include<string.h>
#include<stdio.h>	/*required for sprintf*/
#include<stdlib.h>	/*for abs() function*/

int diffDays(char *date1, char *date2)
{
	char *str_to_check, *greater_date;
	int greater_year, smaller_year, cmp_ret_val, years_count = 0, leap_year_count = 0;

	splitDate(date1, &dd1, &mm1, &yyyy1);
	splitDate(date2, &dd2, &mm2, &yyyy2);

	if(yyyy1 == yyyy2)		/*if 2 dates are from same year*/
		return abs( julian(dd1, mm1, yyyy1) - julian(dd2, mm2, yyyy2) );	/*return the difference. abs() requres stdlib.h*/
	else {
		if(cmpDate(date1, date2) > 0) {
		sprintf(str_to_check,"01/04/%d",yyyy1);
		strcpy(greater_date, date1);
		greater_year = yyyy1;
		smaller_year = yyyy2;
		cmp_ret_val = 1;
		}
		else if(cmpDate(date1, date2) < 0) {
		sprintf(str_to_check,"01/04/%d",yyyy2);
		strcpy(greater_date, date2);
		greater_year = yyyy2;
		smaller_year = yyyy1;
		cmp_ret_val = -1;
		}

		for(int i = greater_year; i > smaller_year; i--) {
		years_count++;
		//if(cmpDate(greater_date, str_to_check) > 0)
		if( isLeap(i) )
		leap_year_count++;
		}

		if(cmp_ret_val == 1)
		return julian(dd1,mm1,yyyy1) + (365 * years_count++) + leap_year_count;
		else if(cmp_ret_val < 0)
		return julian(dd2,mm2,yyyy2) + (365 * years_count++) + leap_year_count;
	}
}

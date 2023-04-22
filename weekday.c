			/*Find the week-day (Sun, Mon. Tue, ..) from the given date*/

#include"dtmanip.h"
#include<string.h>

void weekDay(char *date, char *week_day)
{
	splitDate(date, &dd, &mm, &yyyy);
	int day = (yyyy + julian(dd, mm, yyyy) + (yyyy-1)/4 - (yyyy-1)/100 + (yyyy-1)/400 ) % 7;
	
	switch(day) {
	case 0:
		strcpy(week_day,"Saturday");
		break;
	case 1:
		strcpy(week_day,"Sunday");
		break;
	case 2:
		strcpy(week_day,"Monday");
		break;
	case 3:
		strcpy(week_day,"Tuesday");
		break;
	case 4:
		strcpy(week_day,"Wednesday");
		break;
	case 5:
		strcpy(week_day,"Thursday");
		break;
	case 6:
		strcpy(week_day,"Friday");
		break;
	}
}

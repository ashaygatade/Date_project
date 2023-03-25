	/*RETURN VALUES: return value = -1 --> extracting the date in integer format from string format FAILED*/
			/*return value = 0 --> SUCCESS*/
#include<stdio.h>
#include<stdlib.h>	/*for sscanf*/
#include<string.h>	/*for strcmp*/

int format(char *src_string, int *, int *, int *);

int main()
{
	char src_string[20];
	int date, year, month, res;
	printf("Enter a date in format: January 23 1991\n");
	scanf("%[^\n]s", src_string);
	
	res = format(src_string, &date, &month, &year);

	if(res==0) {
		printf("Date extracted from string format to integer successfully:\n");
		printf("%d/%d/%d", date, month, year);
	}
	else printf("Operation failed\n");
	return 0;

}
int format(char src_string[], int *date, int *month_number, int *year)
{
	int res;
	char month_in_word[10];
	res = sscanf(src_string, "%s %d %d", month_in_word, date, year);
	
	if( !( strcmp(month_in_word, "January") | strcmp(month_in_word, "january") ))
		*month_number = 1;
	
	else if( !( strcmp(month_in_word, "February") | strcmp(month_in_word, "february") ))
		*month_number = 2;

	else if( !( strcmp(month_in_word, "March") | strcmp(month_in_word, "march") ))
		*month_number = 3;

	else if( !( strcmp(month_in_word, "April") | strcmp(month_in_word, "april") ))
		*month_number = 4;

	else if( !( strcmp(month_in_word, "May") | strcmp(month_in_word, "may") ))
		*month_number = 5;

	else if( !( strcmp(month_in_word, "June") | strcmp(month_in_word, "june") ))
		*month_number = 6;
	
	else if( !( strcmp(month_in_word, "July") | strcmp(month_in_word, "july") ))
		*month_number = 7;

	else if( !( strcmp(month_in_word, "August") | strcmp(month_in_word, "august") ))
		*month_number = 8;

	else if( !( strcmp(month_in_word, "September") | strcmp(month_in_word, "september") ))
		*month_number = 9;

	else if( !( strcmp(month_in_word, "October") | strcmp(month_in_word, "october") ))
		*month_number = 10;

	else if( !( strcmp(month_in_word, "November") | strcmp(month_in_word, "november") ))
		*month_number = 11;

	else if( !( strcmp(month_in_word, "December") | strcmp(month_in_word, "december") ))
		*month_number = 12;

	else printf("month_in_word strcmp failed to give zero\n");

	if(res==EOF)
		return -1;	/*failed brutally*/
	else if(res==0)
		return -2;	/*other error*/
	else if(res>0)		/*result will be no of items filled, therefore successful working*/
		return 0;	
}

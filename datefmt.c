#include<stdio.h>	/*as per man page, this one is for sscanf*/
#include<stdlib.h>	/*for sscanf*/
#include"dtmanip.h"	/*for isValid declaration*/

/*Date should be strictly in the format "dd/mm/yyyy" */

void splitDate(char *date, int *dd, int *mm, int *yyyy)
{
	int res;
	date[2] = date[5] = ' ';	/*assign space (' ') in place of '/' in "dd/mm/yyyy". '\0' character is assigned in book to convert it into small sub-string*/
	//printf("String after subsitution of space = %s\n",src_string);
	res = sscanf(date, "%d%d%d", dd, mm, yyyy);
	/*if(res!=3) {
		printf("Failed to split date, momth and year\n");	//failure of sscanf function: takes place if dd or mm or yyyy is float, that will be\
									//taken care by rounding off to integer
		exit(-1);
	}*/
	/*sscanf: RETURN VALUE: On success, returns the number of items extracted\
	 * On failure: number less than number of items extracted or EOF
	 */

	/*Logic written in book*/
	/**dd = atoi(date);
	if(!*dd)
		printf("atoi() for dd failed\n");
	*mm = atoi(date+3);
	if(!*mm)
		printf("atoi() for mm failed\n");
	*yyyy = atoi(date+6);
	if(!*yyyy)
		printf("atoi() for yyyy failed\n");*/
}

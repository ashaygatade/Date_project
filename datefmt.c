#include<stdio.h>	/*as per man page, this one is for sscanf*/
#include<stdlib.h>	/*for sscanf*/

/*Date should be strictly in the format "dd/mm/yyyy" */

void splitDate(char *date, int *dd, int *mm, int *yyyy)
{
	//int res;
	date[2] = date[5] = ' ';	/*assign space (' ') in place of '/' in "dd/mm/yyyy"*/
	//printf("String after subsitution of space = %s\n",src_string);
	/*res =*/sscanf(date, "%d %d %d", dd, mm, yyyy);	
	/*sscanf: RETURN VALUE: On success, returns the number of items extracted\
	 * On failure: number less than number of items extracted or EOF
	 */
}

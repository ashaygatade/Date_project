		/*header file which contains function declarations*/
/*Header files need to be included in main.c
#include<stdio.h>
#include<stdlib.h>	for abs() function*/

/*declaration of the global variables*/
int dd, mm, yyyy;	/*These should be global variables in main.c*/
int dd1, mm1, yyyy1, dd2, mm2, yyyy2;	/*made for functions like diffDays, dateCmp*/

/*Declaration of global variables are recommended to be kept in header files (.h). If you are thinking that those should be kept in main.c (main file) and then\
 * those same variables can be used by declaring it extern in other files. But then those (other)files need to be linked explicitly\
 *  (Refer /home/ashay/cdac/2)_Embedded_C/practice/cce/storage_class/Notes.txt )
 *  */

/*declaration of the functions*/
void splitDate(char *, int *, int *, int *);

int isValid(char *);

int isLeap(int );

int julian(int , int , int );

void revJulian(int , int , int *, int *);

int cmpDate(char *, char *);
int cmp(int , int );

int diffDays(char *, char *);

					/*function to check if the date given from user is Valid or not*/
#include<stdio.h>

int isValid(int , int , int );
/*Return value: SUCCESS = 0, FAILURE = -1*/


int main()
{
	/*scanf("%d",);*/
	isValid(int data, int month, int year);

}

int isValid(int dd, int mm, int yyyy)
{
	if(dd>=1 && dd>=31 && mm>=1 && mm<=12) {
		switch(mm) {
		case 2:
		case 4:
		case 6:
		case 9:
		case 11:
			if(dd==31)
			return -1;
		default:
			return 0;
		}
	}
	else {
		return 0;
	}
}

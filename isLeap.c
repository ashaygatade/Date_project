int isLeap(int yyyy)
{
	if(yyyy % 100 == 0) {		/*for century years*/
		if(yyyy % 400 == 0)	/*they should be in multiple of 400*/
		return 1;
		else return 0;
	}
	else {				/*for non-century years*/
		if( yyyy % 4 == 0)
		return 1;
		else return 0;
	}
}

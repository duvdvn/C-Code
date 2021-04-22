#include <stdio.h>

void main ()
{
	char fullname[5][30];
	int i;
	
	for (i=0; i<5; i++)
	{
		printf ("Enter Fullname is people %d: ", i+1);
		fflush(stdin);
		//scanf ("%s", fullname[i]);
		gets(fullname[i]);
	}
	
	printf ("The list is as follows: ");
	for (i=0; i<5; i++)	
		printf ("\n%s", fullname[i]);
}

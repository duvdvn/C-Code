#include <stdio.h>

void main()
{
	int x;
	x=0; 	
	
	system("cls");
	
	printf ("Please enter choice (1-3): ");
	scanf ("%d", &x);
	
	if (x==1)
		printf ("\nChoice is 1");
	else if (x==2)
		printf ("\nChoice is 2");
	else if (x==3)
		printf ("\nChoice is 3");
	else
	printf ("Invalid Choice: Invalid Choice");
			
}

#include <stdio.h>

void main()
{
	int x, y;
	x=y=0;
	system("cls");
	
	printf ("Enter Choice (1-3): ");
	scanf ("%d", &x);
	if (x==1)
	{
		printf ("Enter value for y (1-5): ");
		scanf ("%d", &y);
		if (y<=5)
			printf ("\nThe value for y is: %d", y);
		else
			printf ("The value of y exceeds 5");
	}
	else
		printf ("\nChoice entered was not 1");
}

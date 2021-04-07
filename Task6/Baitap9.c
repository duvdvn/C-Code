#include <stdio.h>

void main ()
{
	int a, b, c;
	printf ("Please enter three number\n");
	printf ("Number a: ");
	scanf ("%d", &a);
	printf ("Number b: ");
	scanf ("%d", &b);	
	printf ("Number c: ");
	scanf ("%d", &c);	

	if (a<b && b<c)
		printf ("The order of numbers is: %d, %d, %d", a, b, c);	
	if (a<c && c<b)
		printf ("The order of numbers is: %d, %d, %d", a, c, b);
	if (b<a && a<c)
		printf ("The order of numbers is: %d, %d, %d", b, a, c);
	if (b<c && c<a)
		printf ("The order of numbers is: %d, %d, %d", b, c, a);
	if (c<a && a<b)
		printf ("The order of numbers is: %d, %d, %d", c, a, b);
	if (c<b && b<a)
		printf ("The order of numbers is: %d, %d, %d", c, b, a);		
	
}


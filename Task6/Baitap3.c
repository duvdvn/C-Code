#include <stdio.h>

void main ()
{
	int a, b, c;
	
	printf ("Please enter three different number integer\n");
	printf ("/nNumber 1: ");
	scanf ("%d", &a);
	printf ("\nNumber 2: ");
	scanf ("%d", &b);
	printf ("\nNumber 3: ");
	scanf ("%d", &c);
	
	if (a>b && a>c)
	printf ("\nThis number %d is Max", a);
	else if (b>a && b>c)
	printf ("\nThis number %d is Max", b);
	else
	printf ("\nThis number %d is Max", c);
}

#include <stdio.h>

void main()
{
	int a, b, c;
	
	printf ("Please enter three number\n");
	printf ("Number a: ");
	scanf ("%d", &a);
	printf ("Number b: ");
	scanf ("%d", &b);
	printf ("Number c: ");
	scanf ("%d", &c);
	
	if (a*a==b*b+c*c)
		printf ("This is Right Triangle with Hypotenuse is a");
	else if (b*b==a*a+c*c)
		printf ("This is Right Triangle with Hypotenuse is b");
	else if (c*c==a*a+b*b)
		printf ("This is Right Triangle with Hypotenuse is c");
	else
		printf ("This is not Right Triangle !");
	
}

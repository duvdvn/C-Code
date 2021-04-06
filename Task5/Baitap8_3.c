#include <stdio.h>
#include <conio.h>

void main()
{
	float a, b, c;
	
	printf ("Enter value of three variable \n");
	printf ("Variable a = ");
	scanf ("%f", &a);
	printf ("Variable b = ");
	scanf ("%f", &b);
	printf ("Variable c = ");
	scanf ("%f", &c);
	
	if (a==b)
		if (a>c)
		printf ("Two variable is biggest !");
		else 
		printf ("The biggest variable is: c = %.2f", c);
	else if (a>b)
		if (a==c)
		printf ("Two variable is biggest !");
		else if (a>c)
		printf ("The biggest variable is: a = %.2f", a);
		else 
		printf ("The biggest variable is: c = %.2f", c);
	else if (b==c)
		printf ("Two variable is biggest!");
	else
		printf ("The biggest variable is: b = %.2f", b);
}

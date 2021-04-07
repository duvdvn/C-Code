#include <stdio.h>
#include <math.h>

void main()
{
	float a, b, c, delta;
	
	printf ("This is quadratic ax2+bx+c=0 (a!=0), please enter value of a, b, c\n");
	printf ("Input a: ");
	scanf ("%f", &a);
	printf ("Input b: ");
	scanf ("%f", &b);
	printf ("Input c: ");
	scanf ("%f", &c);
	
	delta=b*b-4*a*c;
	
	if (delta==0)
		printf ("This Quadratic have double solutions: x12= %f", -b/2*a);
	else if (delta<0)
		printf ("This Quadratic no solution !");
	else
		printf ("This Quadratic have two solutions: x1 = %f \tx2 = %f", (-b-sqrt(delta))/(2*a), (-b+sqrt(delta))/(2*a));
		
} 


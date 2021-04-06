#include <stdio.h>

void main()
{
	float num1, num2;
	
	printf ("Please enter two number, num1: ");
	scanf ("%f", &num1);
	printf ("and num2: ");
	scanf ("%f", &num2);
	
	if (num1*num2>=1000)
		printf ("Product of two numbers greater than or equal to 1000 ! ");
	else
		printf ("Product of two numbers smaller to 1000 ! ");
}

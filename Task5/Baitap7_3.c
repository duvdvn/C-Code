#include <stdio.h>

void main()
{
	float num1, num2;
	
	printf ("Please enter two number, number1: ");
	scanf ("%f", &num1);
	printf ("\tand number1: ");
	scanf ("%f", &num2);
	
	if (num1-num2==num1)
		printf ("Difference value is: %f", num1);
	else if (num1-num2==num2)
		printf ("Difference value is: %f", num2);
	else if (num2-num1==num1)
		printf ("Difference value is: %f", num1);
	else if (num2-num1==num2)
		printf ("Difference value is: %f", num2);
	else
		printf ("The difference is not equal to which value has been entered !");
}

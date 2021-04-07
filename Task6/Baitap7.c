#include <stdio.h>
void main()
{
	int num1, num2;
	printf ("Please enter two number do you want to check?\n");
	printf ("Numer 1: ");
	scanf ("%d", &num1);
	printf ("Numer 2: ");
	scanf ("%d", &num2);
	
	if (num1%num2==0)
		printf ("Number 2 is a divisor of the Number 1");
	else if (num2%num1==0)
		printf ("Number 1 is a divisor of the Number 2");
	else
		printf ("Number 1 and/or Number 2 are not divisors !");	
}

#include <stdio.h>
#include <conio.h>

void main()
{
	int num1, num2;
	system("cls");
	
	num1=77;
	num2=90;
	
	if (num1==num2)
		printf ("\n The Numbers are equal");
	else if (num1<num2)
		printf ("The Greater Number Is: %d", num2);
	else
		printf ("The Greater Number Is: %d", num1);
	
}

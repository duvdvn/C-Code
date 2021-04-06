#include <stdio.h>
#include <conio.h>
int main (void)
{
	char c;
	float salary;
	
	printf ("Please enter classification of employees (A, B, Other): ");
	scanf ("%c", &c);
	printf ("Please enter employee's salary: ");
	scanf ("%f", &salary);
	
	
	if (c=='A')
		printf ("The employee's total income is: %.2f", salary+300);
	else if (c=='B')
		printf ("The employee's total income is: %.2f", salary+250);
	else if (c=='Other')
		printf ("The employee's total income is: %.2f", salary+100);
	else 
		printf ("The classification of the employee you entered is incorrect !");
		
} 

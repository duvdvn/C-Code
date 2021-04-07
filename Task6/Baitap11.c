#include <stdio.h>
void main()
{
	int num1, num2;
	char choice;
	
	printf ("Please enter two number \n");
	printf ("Number 1: ");
	scanf ("%d", &num1);
	printf ("Number 2: ");
	scanf ("%d", &num2);
	
	printf ("\tMENU\n");
	printf ("====================\n");
	printf ("+\n");
	printf ("-\n");
	printf ("x\n");
	printf (":\n");
	printf ("====================\n");
	
	fflush (stdin);
	printf ("Choice (+,-,x,:) ");
	choice=getchar();
//	scanf ("%c", choice);
	
	switch (choice)
		{
			case '+':
			printf ("%d + %d = %d", num1, num2, num1+num2);
			break;
			case '-':
			printf ("%d - %d = %d", num1, num2, num1-num2);
			break;
			case 'x':
			printf ("%d x %d = %d", num1, num2, num1*num2);
			break;
			case 'X':
			printf ("%d x %d = %d", num1, num2, num1*num2);
			break;
			case ':':
			printf ("%d : %d = %d", num1, num2, float(num1/num2));
			break;
		default:
		printf ("Incorect");
		break;
		}	
}

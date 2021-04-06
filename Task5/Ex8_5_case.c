#include <stdio.h>
#include <conio.h>
void main()
{
	int num1, num2, res;
	char op;
	op='-';
	num1=90;
	num2=33;
	system("cls");
	switch (op)
	{
		case '+':
			res=num1+num2;
			printf ("\n The sum is: &d", res);
		break;
		case '-':
			res=num1-num2;
			printf ("\n Number affter Subtraction: %d", res);
		break;
		case '/':
			res=num1/num2;
			printf ("\n Number affter Division: &d", res);
		break;
		case '*':
			res=num1*num2;
			printf ("\n Number affter multiplication: &d", res);
		break;
		default:
			printf ("\n Invalid");
		break;
	}
}


#include <stdio.h>
void main ()
{
	float x;
	char choice;
	
	printf ("Please enter value do you want to convert (meter): ");
	scanf ("%f", &x);
	fflush(stdin);
	printf ("\n 1.mm\n 2.cm\n 3.dm\n 4.km\n");
	printf ("\nPlease select the unit to convert (1-4): ");
	scanf	("%c", &choice);
	
	switch (choice)
	{
		case '1':
		printf ("\n1 - is Millimetre, length = %.2f mm \n", x*1000);
		break;
		case '2':
		printf ("\n2 - is Centimetre, length = %.2f cm \n", x*100);
		break;
		case '3':
		printf ("\n3 - is Decimetre, length = %.2f dm \n", x*10);
		break;
		case '4':
		printf ("\n4 - is Kilomet, length = %.2f km \n", x/1000);
		break;
	default:
	printf ("Your choice is not correct !");
	break;
	}
}

#include <stdio.h>
#include <conio.h>

void main ()
{
	char x;
	
	printf ("Please enter one any charactor, \nI talk to you programming language name in computer: ");
	scanf ("%c", &x);
	
	switch (x)
	{
		case 'A':
		case 'a':
		printf ("Programming language is: Ada");
		break;
		case 'B':
		case 'b':
		printf ("Programming language is: Basic");
		break;
		case 'C':
		case 'c':
		printf ("Programming language is: %c = COBOL", x);
		break;
		case 'D':
		case 'd':
		printf ("Programming language is: %c = dBASE III", x);
		break;
		case 'F':
		case 'f':
		printf ("Programming language is: %c = Fortran", x);
		break;
		case 'P':
		case 'p':
		printf ("Programming language is: %c = Pascal", x);
		break;
		case 'V':
		case 'v':
		printf ("Programming language is: %c = Visual C++", x);
		break;
	default:
		printf ("No Programming language with %c", x);
	break;
	}
	
}

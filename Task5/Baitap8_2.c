/*Can hoi lai co giao ve cho chu Hoa va chu Thuong*/
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
		printf ("Programming language is: Ada");
		break;
		case 'a':
		printf ("Programming language is: Ada");
		break;
		case 'B':
		printf ("Programming language is: Basic");
		case 'b':
		printf ("Programming language is: Basic");
		break;
		case 'C':
		printf ("Programming language is: %c = COBOL", x);
		break;
		case 'c':
		printf ("Programming language is: %c = COBOL", x);
		break;
		case 'D':
		printf ("Programming language is: %c = dBASE III", x);
		break;
		case 'd':
		printf ("Programming language is: %c = dBASE III", x);
		break;
		case 'F':
		printf ("Programming language is: %c = Fortran", x);
		case 'f':
		printf ("Programming language is: %c = Fortran", x);
		break;
		case 'P':
		printf ("Programming language is: %c = Pascal", x);
		break;
		case 'p':
		printf ("Programming language is: %c = Pascal", x);
		break;
		case 'V':
		printf ("Programming language is: %c = Visual C++", x);
		break;
		case 'v':
		printf ("Programming language is: %c = Visual C++", x);
		break;
	default:
		printf ("No Programming language with %c", x);
	break;
	}
	
}

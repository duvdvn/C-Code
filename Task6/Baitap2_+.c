#include <stdio.h>
void main()
{
	char x;
	printf ("Please one charactor do you want to check in the Alphabet or Number (0-9): ");
	scanf ("%c", &x);
	
	switch (x)
		{
			case '0':			
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			printf ("This charactor %c is Number", x);	
			break;
			default:		
				if (x>='A' && x<='Z')	
				printf ("This charactor %c is Capitalize letter", x);
				else if (x>='a' && x<='z')
				printf ("This charactor %c is Lowercase  letter", x);
				else
				printf ("This charactor out of Alphabet and Number (1-9)", x);		
		}
}

#include <stdio.h>

void main ()
{
	char c;
	
	printf ("Please enter any charactor in Alphabet (a-z): ");
//	scanf ("%c", &c);	
	c=getchar();
	
	if (c>='A' && c<='Z' || c>='a' && c<='z')
		switch (c)
		{
			case 'a':
			case 'A':		
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			printf ("This charactor %c is vowel", c);
			break;
		default:
			printf ("This charactor %c is consonant", c);
		break;
		}
	else
		printf ("This charactor is not of Alphabet");
							
}

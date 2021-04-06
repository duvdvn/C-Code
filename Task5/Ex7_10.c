#include <stdio.h>

main()
{
	char ch;
	system("cls");
	
	printf ("\nEnter a lower cased alphabet (a-z): ");
	scanf ("%c", &ch);
	
	if (ch<'a'|| ch>'z')
		printf ("\nCharactor not a lower cased alphabet");
	else
		switch (ch)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			
			printf ("Charactor is vowel");
			break;
		case 'z':
			printf ("Last Alphaber (z) was entered");
			break;
		default:
			printf ("\nCharactor is a consonant");
			break;
		}
}

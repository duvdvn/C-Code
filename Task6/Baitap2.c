#include <stdio.h>

void main()
{
	char x;
	printf ("Please one charactor do you want to check: ");
	scanf ("%c", &x);
	
	if (x>='A' && x<='Z')
	printf ("This charactor %c is Capitalize letter", x);
	else
	printf ("This charactor %c is Lowercase  letter", x);
}

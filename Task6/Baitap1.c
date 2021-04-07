#include <stdio.h>

void main()
{
	char x;
	x=0;
	printf ("Please one charactor do you want to check (scanf): ");
	scanf ("%c", &x);
	
	printf ("\nThis ASCII of charactor is: %d\n", x);
	
	x=0;
	fflush(stdin);
	printf ("\nPlease one charactor do you want to check (getchar): ");
	x= getchar();
	
	printf ("This ASCII of charactor is: %d", x);
	
}

#include <stdio.h>

int main(void) 
{
	int num;
	
	printf ("Enter one integers: ");
	scanf ("%d", &num);
	
	if (num==0) {
		printf ("Number %d is 0\n", num);
	} else
	if (num>0) {
		printf ("Number %d is integers\n", num);
	} else
	{
		printf ("Number %d is negative integers\n", num);
	}
	
	return 0;
}

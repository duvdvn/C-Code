#include <stdio.h>

void main()
{
	int arr[10];
	int i;
	
	for (i=0; i<10; i++)
	{
		printf ("Enter value %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	printf ("Element in even position is: ");
	for (i=0; i<10; i+=2)
		printf ("\t%d", arr[i]);
}

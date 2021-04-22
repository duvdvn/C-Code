#include <stdio.h>

void main()
{
	int arr[5];
	int i, j;
	float arr2[10];
	
	for (i=0, j=0; i<5; i++, j++)
	{
		printf ("Enter value Array Integer %d: ", i+1);
		scanf ("%d", &arr[i]);
		arr2[j] = (float)arr[i];
	}
	
	for (j=5; j<10; j++)
		arr2[j] = 0;
	
	printf ("Array Interger is: ");
	for (i=0; i<5; i++)
		printf ("\t%d", arr[i]);
	
	printf ("\nArray Float is: ");
	for (j=0; j<10; j++)
		printf ("\t%.2f", arr2[j]);
}

#include <stdio.h>

int reverse (int arr[], int size)
{
	int i;
	for (i=size-1; i>=0; i--)
	{
		printf ("\t%d", arr[i]);
	}
	return arr;
}

void main ()
{
	int i, size;
		
	printf ("Enter to the size of array: ");
	scanf ("%d", &size);
	
	int arr[size];
	
	for (i=0; i<size; i++)
	{
		printf ("Enter value of section %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("This is the Array input:");
	for (i=0; i<size; i++)
	{
		printf ("\t%d", arr[i]);
	}
	
	printf ("\nThis is the Array Reverse: ");	
	reverse(arr, size);
	
}

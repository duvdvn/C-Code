#include <stdio.h>

int indexMin(int arr[], int size)
{
	int i, min;
	
	min=arr[0];
	
	for (i=0; i<size; i++)
	{
		if (min>arr[i])	min=arr[i];	
	}
	return min;
}

void main()
{
	int i, size;
	
	printf ("Enter to the size of array: ");
	scanf ("%d", &size);

	int arr[size];
	
	for (i=0; i<size; i++)
	{
		printf ("Enter value of section is %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	printf ("This min value of Array is: %d", indexMin(arr, size));
}

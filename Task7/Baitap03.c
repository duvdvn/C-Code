#include <stdio.h>

void main()
{
	int arr[10];
	int i, min, max, countmin, countmax, sum=0;
	
	for (i=0; i<10; i++)
	{
		printf ("Enter value %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	min=arr[0];
	max=arr[0];
	
	for (i=0; i<10; i++)
	{
		if (min>arr[i]) min=arr[i];
		if (max<arr[i]) max=arr[i];
		sum += sum+arr[i];
	}
	for (i=0; i<10; i++)
	{
		if (min==arr[i]) countmin++;
		if (max==arr[i]) countmax++;
	}
	printf ("\nMax is: %d", max); 
	printf ("\nAmount appear: %d", countmax);
	printf ("\nMin is: %d", min);
	printf ("\nAmount appear: %d", countmin);
	printf ("\nSum is: %d", sum);
	printf ("\nAverage is: %f", (float)sum/10);
}

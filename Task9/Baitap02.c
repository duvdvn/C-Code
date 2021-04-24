#include <stdio.h>

int check(int num)
{
	int x;
	if (50%num==0)
		x=0;
	else x=1;
}

int main()
{
	int arr[100];
	int i, j, test;
	
	printf ("Enter amount number in the array: ");
	scanf ("%d", &j);
	
	for (i=0; i<j; i++)
	{
		printf ("Enter value number %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("The numbers are multiples of 50 is: \n");
	for (i=0; i<j; i++)
	{
		if (check(arr[i])==0)	
			printf ("\t%d", arr[i]);
	}	
	return 0;
}

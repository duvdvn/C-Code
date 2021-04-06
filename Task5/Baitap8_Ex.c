#include <stdio.h>
#include <conio.h>

void main()
{
	int M1, M2, M3, avg;
	
	printf ("Please enter score of three subjects: \n");
	printf ("Subject 1: ");
	scanf ("%d", &M1);
	printf ("Subject 2: ");
	scanf ("%d", &M2);	
	printf ("Subject 3: ");
	scanf ("%d", &M3);
	
	avg=(M1+M2+M3)/3;
	
	if (avg>=90)
		printf ("Student rating is: E+");
	else if (avg>=80)
		printf ("Student rating is: E");
	else if (avg>=70)
		printf ("Student rating is: A+");
	else if (avg>=60)
		printf ("Student rating is: A");
	else if (avg>=50)
		printf ("Student rating is: B+");
	else
		printf ("Student is Failed");
}

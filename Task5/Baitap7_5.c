#include <stdio.h>

int main(void) 
{
	int score;
	
	printf ("Please enter score of student: ");
	scanf ("%d", &score);
	
	if (score>=75)
		printf ("Class A student !");
	else if (score>=60)
		printf ("Class B student !");
	else if (score>=45)
		printf ("Class C student !");
	else if (score>=35)
		printf ("Class D student !");
	else
		printf ("Class E student !");	
	
	return 0;
}

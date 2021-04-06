#include <stdio.h>
#include <conio.h>

void main()
{
	int x, y;
	
	printf ("Enter value of x: ");
	scanf ("%d", &x);
	printf ("Enter value of y: ");
	scanf ("%d", &y);

	if (x<2000 || x>3000)
		if (y>100 && y<500)
		printf ("x is value out 2000-3000, and y value in 100-500: x = %d and y = %d ", x, y);
		else 
		printf ("x is value out 2000-3000, and y value out 100-500: x = %d", x);	
		else if (y>100 && y<500)
		printf ("x is value in 2000-3000, and y value in 100-500: y = %d ", y);
	else
		printf ("Value is failed");
}

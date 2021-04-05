#include <stdio.h>
#include <conio.h>

int main(void) {
	float top, bottom, height, s;
	
	printf ("This program Calculate the area of a trapezoid \n");
	printf ("Enter Top length (cm): ");
	scanf ("%f", &top);
	printf ("Enter Bottom length (cm): ");
	scanf ("%f", &bottom);
	printf ("Enter Height length (cm): ");
	scanf ("%f", &height);
	
	s=(bottom+top)*height/2;
	
	printf ("The area of this trapezoid is: %.2f cm\n", s);
	
	getch ();
	
	return 0;
}

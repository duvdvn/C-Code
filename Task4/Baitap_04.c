#include <stdio.h>
#include <conio.h>

int main(void) {
	
	float c,f;
	
	printf ("This is convert Celsius (C) and Fahrenheit (F) \n");
	printf ("Enter Celsius degree: ");
	scanf ("%f", &c);
	
	f=c/5*9+32;
	printf ("Fahrenheit is: %.2f", f);
	
	getch ();
	
	return 0;
}

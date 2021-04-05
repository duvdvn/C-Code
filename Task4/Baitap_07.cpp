#include <stdio.h>
#include <conio.h>

int main(void) {
	
	float r_cir, a_squ, a_rec, b_rec;
	
	printf ("Enter radius of circle (cm): ");
	scanf ("%f", &r_cir);
	printf ("This area of circle is: %.2f cm2\n\n", r_cir*r_cir*3.14159);
	
	printf ("Enter edge of square (cm): ");
	scanf ("%f", &a_squ);
	printf ("This area of square is: %.2f cm2\n\n", a_squ*a_squ);
	
	printf ("Enter two edge of rectangle (cm), \ta: ");
	scanf ("%f", &a_rec);
	printf ("\t\t\t\t and \tb: ");
	scanf ("%f", &b_rec);
	printf ("This area of rectangle is: %.2f cm2\n", a_rec*b_rec);
	
	getch();
	
	return 0;
}

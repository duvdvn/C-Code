#include <stdio.h>

int main(void) {
	
	float 	pi;	/* pi=3,14159*/
	float	s; 	/* acreage*/
	float	p;	/* perimeter*/
	float	r; 	/* radius*/
	
	printf 	("This is a program to calculate the area and circumference of the circle\n");
	printf 	("Enter the radius of circle (meter): ");
	scanf 	("%f", &r);
	
	pi=3.14159;
	s=pi*r*r;
	p=pi*2*r;
	
	printf ("The area of the circle is: %f m2\n", s);
	printf ("The circumference of the circle is: %f m",p);
	
	return 0;
}

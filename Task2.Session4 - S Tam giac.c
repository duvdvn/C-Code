#include <stdio.h>

int main(void) {
	
	float h;	/*hight*/
	float a;	/*botom*/
	float s; 	/*acreage*/
	
	printf 	("Enter hight of triangle (cm): ");
	scanf 	("%f", &h);
	
	printf 	("Enter botom of triangle (cm): ");
	scanf	("%f", &a);
	
	s=a*h/2;
	
	printf ("The area of the triangle is: %f cm2\n", s);
		
	return 0;
}

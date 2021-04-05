#include <stdio.h>


int main(void) {

	float h; 	/*hight*/
	float r;	/*radius*/
//	float s;	/*acreage botom*/
	float v;	/*volume*/
//	float pi;
	
	printf ("Enter the hight of cylinder (cm): ");
	scanf ("%f", &h);
	printf ("Enter the radius botom of cylinder (cm): ");
	scanf ("%f", &r);
	
//	pi=3,14159;
//	s=r*r*pi;

	v=3.14159*r*r*h;
	
	printf ("Volume of this cylinder is: %f cm3", v);

	return 0;
}

#include <stdio.h>
#include <conio.h>

int main(void) {
	
	printf ("Kieu int: %d Byte\n", sizeof(int));
	printf ("So nguyen: %d\n\n", 15);
	
	printf ("Kieu float: %d Byte\n", sizeof(float));
	printf ("So thuc kieu float: %f\n\n", 3.456);
	
	printf ("Kieu double: %d Byte\n", sizeof(double));
	printf ("So thuc kieu double: %f\n\n", 3.4567891235);
	
	printf ("Kieu char: %d Byte\n", sizeof(char));
	printf ("Ky tu: %c\n\n", 'E');
	
	printf ("Kieu long int: %d Byte\n\n", sizeof(long int));
	
	printf ("Kieu long double: %d Byte\n\n", sizeof(long double));
	
	getch();
	
	return 0;
}

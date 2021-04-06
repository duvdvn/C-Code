/*Viet chuong trinh nhap vao hai so a va b, sau do kiem tra xem a co chia het cho b hay khong*/
#include <stdio.h>

void main()
{
	int a, b;
	
	printf ("Please enter number a: ");
	scanf ("%d", &a);
	printf ("Please enter number b: ");
	scanf ("%d", &b);
	
	if (a%b==0)
		printf ("This number a divisible number b !");
	else
		printf ("This number a not divisible number b !");
}

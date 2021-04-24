#include <stdio.h>

float dientich(float a, float b)
{
	float s;
	s=a*b;
	printf ("\n\nDien tich cua hinh chu nhat la: %.2f", s);
	return s;
}
float chuvi(float a, float b)
{
	float c;
	c=(a+b)*2;
	printf ("\n\nChu vi cua hinh chu nhat la: %.2f", c);
	return c;
}

void main ()
{
	float a, b;
	char choice;
	
	do
	{
		choice='n';
		printf ("Hay nhap vao chieu dai va chieu rong cua hinh chu nhat");
		printf ("\nChieu dai: ");
		scanf ("%f", &a);
		printf ("\nChieu rong: ");
		scanf ("%f", &b);
		do
		{
			choice='n';
			printf ("\n\nBan muon tinh dien tich (1) hay chu vi (2): ");
			fflush(stdin);
			scanf ("%c", &choice);
			switch (choice)
			{
				case '1':
					dientich(a, b);
				break;
				case '2':
					chuvi(a, b);
				break;
				default:
				{
					printf ("\n\nLua chon cua ban khong dung\nBan chi co the chon 1-Dien tich hoac 2-Chu vi");
					printf ("\n\nBan co muon chon lai khong? (y/n) ");
					fflush (stdin);
					scanf ("%c", &choice);
				}
			}
		}while (choice=='y');
		
		printf ("\n\nBan co muon thuc hien lai chuong trinh khong? (y/n) ");
		fflush (stdin);
		scanf ("%c", &choice);
	}while (choice=='y');
}

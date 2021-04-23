#include <stdio.h>

void main ()
{
	int	bangdiem[4][30];
	float tong;
	int diem, sv, sl;
	
	printf ("Nhap vao so luong Sinh vien: ");
	scanf ("%d", &sl);
	
	for (diem=0; diem<4; diem++)
	{
		for (sv=0; sv<sl; sv++)
		{
			printf ("Nhap diem Mon %d cua SV %d: ", diem+1, sv+1);
			scanf ("%d", &bangdiem[diem][sv]);	
		}
	}
	
	for (sv=0; sv<sl; sv++)
	{
		tong=0;
		for (diem=0; diem<4; diem++)
		{
			tong+=(float)bangdiem[diem][sv];
		}
		printf ("\nDiem trung binh cua SV%d = %.2f", sv+1, tong/4);
	}		
}



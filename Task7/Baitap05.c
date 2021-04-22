#include <stdio.h>

void main ()
{
	int	bangdiem[4][30];
	int tongdiem[30];
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
	
	for (diem=0; diem<4; diem++)
	{
		for (sv=0; sv<sl; sv++)
		{
			tongdiem[sv]+=tongdiem[sv]+bangdiem[diem][sv];
		}
	}	
	
	printf("\nBang ket qua hoc tap: \n");
	for (diem=0; diem<4; diem++)
	{
		printf ("\n");
		for (sv=0; sv<sl; sv++)
		{
			printf ("\t%d", bangdiem[diem][sv]);
		}
	}
	
	for (sv=0; sv<sl; sv++)
		printf ("\n\t%d", tongdiem[sv]);
	
}



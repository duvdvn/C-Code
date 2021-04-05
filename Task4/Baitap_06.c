#include <stdio.h>

int main(void) 
{
	float toan;
	float ly;
	float hoa;
	float tongdiem;
	float trungbinh;
	
	printf ("Nhap diem mon Toan: ");
	scanf ("%f", &toan);
	
	printf ("Nhap diem mon Ly: ");
	scanf ("%f",&ly);
	
	printf ("Nhap diem mon Hoa: ");
	scanf ("%f", &hoa);
	
	tongdiem = toan+ly+hoa;
	
	trungbinh = tongdiem/3;
	
	printf ("Tong diem 3 mon la: %f\n", tongdiem);
	printf ("Diem trung binh 3 mon la: %f\n", trungbinh);

	return 0;
	
/* Bai nay lam tu buoi dau tien nen hoi dai dong va viet bang tieng Viet*/
}

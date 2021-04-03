#include <stdio.h>

int main(void) {
	
	float	ex;
	float	usd;
	float 	vnd;
	
//	printf 	("Enter VND/USD exchange rate: ");
//	scanf	("%f", &ex);
	
	ex=16689;
	printf ("Exchange rate is: %f VND/USD\n", ex);
	
	printf ("Enter the amount in USD you want to convert to VND: ");
	scanf	("%f", &usd);
	
	vnd=usd*ex;
	printf ("Amount VND is: %f VND",vnd);
	
	return 0;
}

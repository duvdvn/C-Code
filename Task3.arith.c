#include <stdio.h>
#include <conio.h>

void main ()
{
	int a,b,c,d;
//	clrscr ();
	a=50;
	b=24;
	c=68;
	
	d=a*b+c/2;
	printf ("\n The value affter a*b+c/2 is: %d", d);
	
	d=a%d;
	printf ("\n The value affter a mod b is: %d", d);
	
	d=a*b-c;
	printf ("\n The value affter a*b-c is: %d", d);
	
	d=a/b+c;
	printf ("\n The value affter a/b+c is: %d", d);
	
	d=a+b*c;
	printf ("\n The value affter a+b*c is: %d", d);
	
	d=(a+b)*c;
	printf ("\n The value affter (a+b)*c is: %d", d);
	
	d=a*(b+c+(a-c)*b);
	printf ("\n The value affter d=a*(b+c+(a-c)*b) is: %d", d);
	
}

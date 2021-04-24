#include <stdio.h>

int GetArea(float a, float b, float c)
{
	float s;
	s=(sqrt((a*a+b*b+c*c)*(a*a+b*b+c*c)-2*(a*a*a*a+b*b*b*b+c*c*c*c)))/4;
	return s;
}

void main()
{
	float a, b, c, max, s, sum_min;
	
	printf ("Please enter the three sides of the triangle \n");
	printf ("\ta = ");
	scanf ("%f", &a);
	printf ("\tb = ");
	scanf ("%f", &b);
	printf ("\tc = ");
	scanf ("%f", &c);
	
	max=a;
	sum_min=b+c;
	
	if (a>b)
	{
			if (a<c) 
			{	
				max=c;
				sum_min=a+b;	
			}
			else 
			{
				max=a;
				sum_min=b+c;
			}
	}
	else
	{
		if (b<c)
		{	
			max=c;
			sum_min=a+b;
		}	
		else 
		{
			max=b;
			sum_min=a+c;
		}
	}
	if (max>=sum_min)
		printf ("This is not a triangle");
	else
	{
		s=GetArea(a, b, c);
		printf ("Area of triangle is: %.2f", s);
	}
}

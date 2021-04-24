#include <stdio.h>

int sum(int a, int b)
{
	int sum;
	sum=a+b;
	printf ("\nSum (%d + %d) is: %d", a, b, sum);
	return sum;
}

int sub(int a, int b)
{
	int sub;
	sub=a-b;
	printf ("\nEffect of subtraction (%d - %d) is: %d", a, b, sub);
	return sub;
}

int multi(int a, int b)
{
	int mul;
	mul=a*b; 
	printf ("\nProduct of multiplication (%d x %d) is: %d", a, b, mul);
	return mul;
}

double div(int a, int b)
{
	double div;
	if (b==0) 
		printf ("\nThis calculation cannot be performed !");
	else
	{
		div=(float)a/b;
		printf ("\nQuotient of division (%d : %d) is: %.2f", a, b, div);
	}
	return div;
}

void main()
{
	int a, b;
	char choice, cal, again, again2;
	
	printf ("\n\tTINH TOAN");
	printf("\n====================");
	printf("\n1. Nhap so");
	printf("\n2. Tinh tong");
	printf("\n3. Tinh hieu");
	printf("\n4. Tinh nhan");
	printf("\n5. Tinh chia");
	printf("\n6. Ket thuc");
	printf("\n====================");
	do
	{
		choice=0;
		again='n';
		fflush(stdin);
		printf("\nChon: ");
		scanf ("%c", &choice);
		if (choice=='6')
			printf ("\nBan da chon ket thuc chuong trinh\nChao tam biet !");
		else if (choice=='1')
		{
			printf ("\nHay nhap 2 so");
			printf ("\n\nNhap so a: ");
			fflush(stdin);
			scanf ("%d", &a);
			printf ("\nNhap so b: ");	
			fflush(stdin);		
			scanf ("%d", &b);
			do
			{
				again2='n';
				printf ("\nHay chon phep tinh (2-5): ");
				fflush(stdin);	
				scanf ("%c", &cal);
				switch (cal)
				{
					case '2':
						sum(a, b);
					break;
					case '3':
						sub(a, b);
					break;
					case '4':
						multi(a, b);
					break;
					case '5':
						div(a, b);
					break;
					default:
					{
						printf ("\nLua chon cua ban khong dung\nBan chi co the chon \"2 den 5\"\n");
						printf ("\nBan co muon chon lai khong? (y/n)");
						fflush(stdin);
						scanf ("%c", &again2);
					}
					break;
				}	
			}while (again2=='y');
		}
		else
		{
			printf ("\nLua chon cua ban khong dung\nBan chi co the chon \"1. Nhap so\" hoac \"6. Ket thuc\"\n");
			printf ("\nBan co muon chon lai khong? (y/n)");
			fflush(stdin);
			scanf ("%c", &again);
		}
	}while (again=='y');			
	printf ("\n");
	getch();
}


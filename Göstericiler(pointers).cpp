#include <stdio.h>
#include <conio.h>

int main()
{
	int a=9;
	int *p;
	p=&a;
	printf("%d",*p);//P nin g�sterdi�i yer
	printf("\n %d",p);//P nin g�sterdi�i yerin adresi yani p nin de�eri
	*p=7;
	printf("\n %d",a);// a n�n de�eri 
	printf("\n %d",&a);// a n�n adresi
	printf("\n %d",&p);// p nin adresi
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int main()
{
	int a=9;
	int *p;
	p=&a;
	printf("%d",*p);//P nin gösterdiði yer
	printf("\n %d",p);//P nin gösterdiði yerin adresi yani p nin deðeri
	*p=7;
	printf("\n %d",a);// a nýn deðeri 
	printf("\n %d",&a);// a nýn adresi
	printf("\n %d",&p);// p nin adresi
	getch();
	return 0;
}

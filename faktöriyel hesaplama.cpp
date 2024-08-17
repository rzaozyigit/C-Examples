#include <stdio.h>

int main()
{
	int sayi;
	printf("faktoriyelini istediginiz sayinin degerini giriniz.");
	scanf("%d",&sayi);
	int fact=1;
	for(int i=1;i<=sayi;i++){
	fact=fact*i;
	}
	printf("%d",fact);
}

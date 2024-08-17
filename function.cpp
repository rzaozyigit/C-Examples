#include <stdio.h>
#include <conio.h>
int fact(int);
int main ()
{	
	printf("Bir sayi giriniz.");
	int x;	
	scanf("%d",&x);
	printf("Faktoriyeli : %d",fact(x));
	getch();
}
	int fact(int x){
		int sonuc = 1;
		for(int i=1;i<=x;i++){
			sonuc*=i;
		}
		return sonuc;
	}

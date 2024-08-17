#include <stdio.h>
#include <stdlib.h>
int main(){
	int ort,toplam,teksayi;
	int a[20];
	for(int i=0;i<5;i++){
	printf("%d.sayiyi giriniz:",i+1);
	scanf("%d",&a[i]);
	if(a[i]%2==1){
		teksayi=a[i];
		toplam=teksayi+toplam;
		ort=toplam/a[i];
	}
	}
 	printf("\n aritmetik ortalamasi:%d",ort);
 	
 return 0;
}

//parametre olarak bir say� alan,ald��� bu say�dan k���k,en b�y�k asal say�y� d�nd�ren fonksiyonu yaz�n�z
#include <stdio.h>
 int main(){
 	int n;
 	printf("bir sayi giriniz",n);
 	scanf("%d",&n);
 	for(int i=n; i>=0;i--){
 		int asal=1;
 		for(int j=2;j<i;j++){
 			if(i%j==0)
 			asal=0;
		 }
		 if(asal==1){
		 	printf("%d",i);
		 	break;
		 }
	 }
 }

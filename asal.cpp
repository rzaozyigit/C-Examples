//parametre olarak bir sayý alan,aldýðý bu sayýdan küçük,en büyük asal sayýyý döndüren fonksiyonu yazýnýz
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

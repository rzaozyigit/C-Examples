#include <stdio.h>
//kullanýcýdan sayý okuyarak ekrana bir kare matrisin bütün elemanlarýnýn 0 ve sadece ortadaki elemanlarý 1 olan bir artý yaazdýrýnýz.
int main(){
	int n;
	printf("bir sayi giriniz");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if (i==n/2 ||j==n/2 || (n%2==0&&(i==n/2-1||j==n/2-1)))
		printf("1");
		else 
		printf("0");
	}
	printf("\n");
	}
	
}

#include <stdio.h>
//kullan�c�dan say� okuyarak ekrana bir kare matrisin b�t�n elemanlar�n�n 0 ve sadece ortadaki elemanlar� 1 olan bir art� yaazd�r�n�z.
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

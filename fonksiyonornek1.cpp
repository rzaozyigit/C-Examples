#include <stdio.h>
//seri toplama
int seriToplama (int x){
	int toplam = 0;
	for(int i = 1; i<=x; i++){
		toplam = i + toplam;
	}
		return toplam;
}

int main()
{
	int x;
	printf("\n x degeri giriniz :\n");
	scanf("%d",&x);
	int seriToplam = seriToplama(x);
	printf("\n x icin seri toplam: %d \n", seriToplam);
	return(0); 
}

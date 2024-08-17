#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//iki sayi arasi rastgele sayi ver
int rastgeleSayiVer(int baslangic, int bitis) {
	srand(time(NULL));
	
	int rastgele = (rand() % baslangic) + (bitis - baslangic);
	
	if(rastgele == baslangic){
		rastgele++;
	}
	return rastgele;
}

int main()
{
	int baslangic;
	int bitis;
	printf("\n baslangic degeri giriniz :\n");
	scanf("%d",&baslangic);
	printf("\n bitis degeri giriniz :\n");
	scanf("%d",&bitis);
	int rastgele = rastgeleSayiVer(baslangic, bitis);
	printf("\n %d -%d arasi rastgele sayi: %d\n",baslangic,bitis,rastgele);
	return(0);	
}

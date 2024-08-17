#include <stdio.h>
#include <stdlib.h>
 struct kayit {
		char ad[20];
		int  yas;
		char bolum[30];
		char medeni[20];
};struct kayit isci;
	int  main(){
	  printf("Adinizi giriniz: ");
	  scanf("%s",&isci.ad); 
	  printf("Yasinizi giriniz: ");
	  scanf("%d",&isci.yas);
	  printf("Bolumunuzu giriniz:");
	  scanf("%s",&isci.bolum);
	  printf("Medeni durumunuzu giriniz:");
	  scanf("%s",&isci.medeni);
	  printf("Adiniz:%s\nYasiniz:%d\nBolumunuz:%s\nMedeni Durumunuz:%s",isci.ad,isci.yas,isci.bolum,isci.medeni);
}

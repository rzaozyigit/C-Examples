#include <stdio.h>
#include <stdlib.h>
int main()
{
	int islem,tutar;
	int bakiye = 1000;
	printf("lutfen yapacaginiz islemi seciniz..\n");
	printf("1)Para Yatirma 3)Para Cekme\n2)Havale 4)Bakiye Sorgulama\n5)Kart iadesi");
	scanf("%d",&islem);
	switch(islem){
	case 1:
		printf("yatirilacak tutar:\n");
		scanf("%d",&tutar);
		bakiye += tutar;
		printf("Toplam bakiyeniz: %d",bakiye);
		break;
	case 2:
		printf("havale yapilacak tutar:");
		scanf("%d",&tutar);
		if(tutar>bakiye){
		printf("Yetersiz Bakiye");
		}
		bakiye -= tutar;
		printf("kalan bakiyeniz:%d",bakiye);
		break;
	case 3:
			printf("cekilecek tutar:");
		scanf("%d",&tutar);
		if(tutar > bakiye){
		printf("Yetersiz Bakiye");
		}
		bakiye -= tutar;
		printf("kalan bakiyeniz");
		break;
	case 4:
		printf("Bakiyeniz: %d",bakiye);
		break;
	case 5:
		printf("Kart Iade edildi");
   		 break;	
   	default:
   		printf("Bilinmeyen islem");
	}
	return 0;	
}

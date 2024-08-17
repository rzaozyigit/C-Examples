#include <stdio.h>
#include <stdlib.h>
 main()
{
     int sayi;
	printf("(1-7) arasinda bir gun degeri girin.");
	scanf("%d", &sayi);
	switch (sayi)
	{
		case 1:printf("Pazartesi\n");break;
		case 2:printf("Sali");break;
		case 3:printf("carsamba\n");break;
		case 4:printf("Persembe\n");break;
		case 5:printf("Cuma\n");break;
		case 6:printf("Cumartesi\n");break;
		case 7:printf("Pazar\n");break;
		default:
		printf("yanlis deger girdiniz\n");
	}
	system("pause");
	return 0;
}

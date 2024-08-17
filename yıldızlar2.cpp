#include <stdio.h>

int main()
{
	int i,j,sayi;
	 printf("Bir sayi giriniz");
	 scanf("%d",&sayi);
     for(i=1;i<=sayi;i++){
     	for(j=1;j<=5-i;j++){
     		printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		
		for(j=1;j<=i;j++){
			printf("*");
		}
			printf("\n");
		}
	return 0;
}



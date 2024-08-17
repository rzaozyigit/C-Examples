#include <stdio.h>
int main()
{
	int i,j,k,l,taban;
	printf("Taban Deðerini giriniz");
	scanf("%d",&taban);
	for(i=1;i<=taban;i++){
		for(j=1;j<=i;j++){
		printf("*");
		}
	printf("\n");
	}
	for(k=1;k<=taban;k++){
		for(l=taban;l>=k;l--){
			printf("*");
		}
		printf("\n");
	}
}

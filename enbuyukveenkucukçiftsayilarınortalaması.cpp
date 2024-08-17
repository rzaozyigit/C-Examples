#include <stdio.h>
#include <stdlib.h>
int main(){
	int ort,toplam,cift;
	int max,min;
	int a[]{2,4,6,5,7};
	max=min=a[0];
	for(int i=0;i<5;i++){
	if(a[i]%2==0){
		cift=a[i];
	if(cift<min){
		min=cift;}
	if(cift>max){
		max=cift;}
		toplam=max+min;
		ort=toplam/2;
	}
	}
	
 	printf("\n aritmetik ortalamasi:%d",ort);
 	
 return 0;
}

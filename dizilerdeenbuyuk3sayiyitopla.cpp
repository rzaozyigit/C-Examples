// DÝZÝDEKÝ EN BÜYÜK 3 SAYIYI TOPLAMA ÝÞLEMÝ
#include <stdio.h>
#include <math.h>
int main(){
	int a[]={2,9,5,7,11};
	int max1,max2,max3;
	max1=max2=max3=a[0];
	for(int i=0;i<5;i++){
		if(max1<a[i]){
		max1=a[i];
		}
		for(int i=0;i<5;i++)
		if(max2<a[i]&&a[i]<max1){
		max2=a[i];
		}
		for(int i=0;i<5;i++)
		if(max3<a[i]&&a[i]<max2){
		max3=a[i];
		}
	}
 	printf("\n max toplami:%d",max1+max2+max3);
 	
 return 0;
}

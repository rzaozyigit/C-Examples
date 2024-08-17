#include <stdio.h>
#define MAX 50
 void bubblesort(int A[],int length)// bir diziyi parametre alan fonksiyon
	{
	int tmp;
	for(int i=0; i<length; i++)
		{
			for (int j=1;j<length-i;j++){
				if(A[j-1]>A[j])
				{
					tmp=A[j-1];
					A[j-1]=A[j];
					A[j]=tmp;
				}
			}
		}
	 }
 int main(){
 	int A[MAX],length;
 	int i;
 	printf("kac elemanli");
 	scanf("%d",&length);
 	for(i=0;i<length; i++ ){
 		scanf("%d",&A[i]);
	 }
	 bubblesort(A,length);
	 for(i=0;i<length; i++ ){
 		printf("%d ",A[i]);
  }
	 return 0;
 }
	


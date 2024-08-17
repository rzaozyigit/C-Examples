#include <stdio.h>
#include <stdlib.h>

int main(){
	int sayilar[5]={1,2,3,4,5};
	int *p=sayilar;
	printf("%d\n",p);
	printf("%d\n",(p+1));
	printf("%d\n",(p+2));
	printf("%d\n",(p+3));
	printf("%d\n",(p+4));
	return 0;
}

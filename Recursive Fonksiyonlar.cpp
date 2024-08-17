#include <stdio.h>
#include <stdlib.h>
int f(int n)
{
	if(n>1)
	f(n-1);
	printf("%d",n);
}
int main(void){
	f(3);
}

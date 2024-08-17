#include <stdio.h>
#include <string.h>

int main(){

	 char x[80];
	 char y[80];
	 printf("Enter value you want enverse:");
	 gets(x);
	 strcpy(y,x);
	 strrev(y);
	 printf("value you entered is :%s\n",x);
	 if (strcmp(x,y)==0){
	 	printf("the same as original :%s" ,x);
	 }
	 else{
	 	printf("enverse is :%s" ,y);
	 }
	 
	 return 0;
}

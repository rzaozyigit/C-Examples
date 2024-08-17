#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
int a,b,c;
float x1,x2;
float delta;
printf("enter the a of equalion:");
scanf("%d",&a);
printf("enter the b of equalion:");
scanf("%d",&b);
printf("enter the c of equalion:");
scanf("%d",&c);

delta=b*b-(4*a*c);
if( delta > 0){
printf("there are foots of equalion:",x1,x2);
x1=((-b +(sqrt (delta)))/2*a);
x2=((-b -(sqrt(delta)))/2*a);
printf ("first foots of equalion are %2f , second foots of equalion are %2f",x1,x2);
}
else if (delta==0){
	printf("foots are equal",x1,x2);
	
	
}
else if (delta<0) {
	printf ("ther are not foots of equalion:");
	
	
	
}
getch();
	return 0;
}

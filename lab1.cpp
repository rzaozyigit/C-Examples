#include <stdio.h>
#include <conio.h>

int main(){
	int a,b,c,d,e;
	printf("\n a");
	 scanf ("%d", &a);
		printf("\n b");
	 scanf ("%d", &b);
	 	printf("\n c");
	 scanf ("%d", &c);
	 	printf("\n d");
	 scanf ("%d", &d);
	 	printf("\n e");
	 scanf ("%d", &e);
	 printf("X:%d\n",  (c*e)-(b*d)/(a*e)-(b*d));
	 printf("Y:%d",  (a*e)-(c*d)/(a*e)-(b*d));
	 getch();
	 return 0;
}

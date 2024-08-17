#include <stdio.h>
#include <math.h>
int main ()
{
	float kilo,boy,vki;	
		printf("lutfen kilonuzu giriniz.");
		scanf("%f",&kilo);
		printf("lutfen boyunuzu metre cinsinden giriniz.");
		scanf("%f",&boy);
		vki=kilo/(boy * boy);
		printf("vucut kitle endeksiniz");
		
		if(vki<18.5 && vki>=0){
			printf("zayif. : %f",vki=kilo/(boy * boy));
		}
		else if(vki>=18.5 && vki<=24.9)
		{
			printf(" normal. : %f",vki=kilo/(boy * boy));
		}
		else if(vki>=25 && vki<=29.9)
		{
			printf(" fazla kilolu. : %f",vki=kilo/(boy * boy));
		}
		else if(vki>=30 && vki<=34.9)
		{
			printf(" 1. dereceden obez. : %f",vki=kilo/(boy * boy));
		}
		else if(vki>=35 && vki<=39.9)
		{
			printf(" 2. dereceden obez. : %f",vki=kilo/(boy * boy));
		}
		else if(vki>=40)
		{
			printf(" 3. dereceden obez. : %f",vki=kilo/(boy * boy));
		}
		return 0;		
}

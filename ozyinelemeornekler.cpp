#include <stdio.h>
/*  // ÖZYÝNELEME KULLANARAK DOÐAL SAYILARIN TOPLAMINI BULMAK
int addNumbers(int n);
int main()
{
	int number;
	printf("Pozitif bir sayi giriniz: ");
	scanf("%d", &number);
	addNumbers(number);
	printf("Toplam = %d",addNumbers(number));
}
int addNumbers(int n)
{ 
	int sum;
	if( n != 0)
	{
	sum = n + addNumbers(n-1);
	}
	else
	{
	return n;
	}	
}
*/
/*  // ÖZYÝNELEME KULLANARAK SAYININ FAKTÖRÝYELÝNÝ BULMAK
int fact (int f);
int main()
{	
	int number;
	printf("bir sayi giriniz: ");
	scanf("%d", &number);
	fact(number);
	printf("%d sayisinin faktoriyeli = %d", number, fact(number));
}
int fact(int f)
{   
	if(f != 0)
	{
		return f* fact(f-1);
	}	
	else
	{
		return 1;	
	}
}
*/
	//Özyineleme kullanarak OBEB bulmak
#include <stdio.h>
int hcf(int n1, int n2);
int main()
{
   int n1, n2;
   printf("pozitif iki tam sayi girin: ");
   scanf("%d %d", &n1, &n2);

   printf("%d ve %d sayýsýnýn OBEB'i %d.", n1, n2, hcf(n1,n2));
   return 0;
}

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}

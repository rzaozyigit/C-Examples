#include <stdio.h>
// aþaðýdaki 4 örnek de, kullanýcý tarafýndan girilen tamsayýnýn asal olup olmadýýný kontrol ediyor.
// tüm programlarýn çýktýsý ayný ancak, her örnekte farklý fonksiyon tüpleri ele alýnmýþýr.
/* // Argüman iletmeyen ve geri deðer döndürmeyen fonksiyon örneði
void asalSayiKontrol();
int main()
{
	asalSayiKontrol();
	return 0;
}
void asalSayiKontrol()
{
	int flag, number;
	printf("bir sayi giriniz:");
	scanf("%d",&number);
	for(int i=2; i<=number/2; i++)
	{
		if( number%i == 0)
		{
			flag = 1;
		}
	}
		if(flag == 1)
		{
			printf("Bu sayi asal degildir!", number);
		}
		else
		{
		printf("bu sayi bir asal sayidir :)", number);
	    }
}
*/
/*	// Argüman iletmeyen, geri deðer döndüren fonksiyon örneði
int getInteger();
int main()
{
	int number, i, flag;
	number = getInteger();
	for(int i=2; i<=number/2; i++)
	{
		if( number%i == 0)
		{
			flag = 1;
		}
	}
		if(flag == 1)
		{
			printf("Bu sayi asal degildir!", number);
		}
		else
		{
		printf("bu sayi bir asal sayidir :)", number);
	    }
}
int getInteger()
{
	int n;
	printf(" Pozitif bir tam sayi giriniz: ");
	scanf("%d", &n);
	return n;
}
*/
/*	// Argüman ileten, geri deðer döndürmeyen fonksiyon örneði
void checkPrimeAndDisplay(int n);
int main()
{
	int number;
	printf("pozitif bir tam sayi giriniz: ");
	scanf("%d",&number);
	checkPrimeAndDisplay(number);
}
void checkPrimeAndDisplay(int n)
{
	int flag;
	for(int i=2; i<=n/2; i++)
	{
		if( n%i == 0)
		{
			flag = 1;
		}
	}
		if(flag == 1)
		{
			printf("Bu sayi asal degildir!", n);
		}
		else
		{
		printf("bu sayi bir asal sayidir :)", n);
	    }
}
*/
	// Argüman ileten, geri deðer döndüren fonksiyon örneði
int checkPrimeNumber(int n);
int main()
{	
	int number, flag;
	printf("Pozitif bir tam sayi giriniz: ");
	scanf("%d", &number);
	flag = checkPrimeNumber(number);
		if(flag == 1)
		{
			printf("Bu sayi asal degildir!", number);
		}
		else
		{
		printf("bu sayi bir asal sayidir :)", number);
	    }
}
int checkPrimeNumber(int n)
{int flag;
	for(int i=2; i<=n/2; i++)
	{
		if( n%i == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}








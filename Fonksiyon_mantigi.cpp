#include <stdio.h>
// a�a��daki 4 �rnek de, kullan�c� taraf�ndan girilen tamsay�n�n asal olup olmad��n� kontrol ediyor.
// t�m programlar�n ��kt�s� ayn� ancak, her �rnekte farkl� fonksiyon t�pleri ele al�nm���r.
/* // Arg�man iletmeyen ve geri de�er d�nd�rmeyen fonksiyon �rne�i
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
/*	// Arg�man iletmeyen, geri de�er d�nd�ren fonksiyon �rne�i
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
/*	// Arg�man ileten, geri de�er d�nd�rmeyen fonksiyon �rne�i
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
	// Arg�man ileten, geri de�er d�nd�ren fonksiyon �rne�i
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








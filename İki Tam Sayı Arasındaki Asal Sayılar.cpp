#include <stdio.h>

// asal say�y� kontrol etmek i�in kullan�c� tan�ml� fonksiyon
int checkPrimeNumber(int n)
{
    int j, flag = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n1, n2, i, flag;

    printf("�ki pozitif tam say� girin: ");
    scanf("%d %d", &n1, &n2);
    printf("%d ve %d aras�ndaki asal say�lar: ", n1, n2);

    for(i=n1+1; i<n2; ++i)
    {
        // i bir asal say�, bayrak 1'e e�it olacak
        flag = checkPrimeNumber(i);

        if(flag == 1)
            printf("%d ",i);
    }
    return 0;
}

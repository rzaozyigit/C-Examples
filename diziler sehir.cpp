#include <stdio.h>
#include <stdlib.h>
int main() {
 char sehir[3][10];
 for( int i=0;i<3;i++)
{
  printf("%d.Sehirin ismini giriniz: ",i+1);
  scanf("%s",sehir[i]);
}
 printf("Girmis oldugunuz sehir isimleri: \n");
 for(int i=0;i<3;i++)
{
  printf("%s\n",sehir[i]);
}
}

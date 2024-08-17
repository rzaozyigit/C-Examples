#include <stdio.h>

int main()
{
int i,j,k,l;
 
 for(i=1;i<=4;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("*");
  }
  for(j=1;j<=8-2*i;j++)
  {
   printf(" ");
  }
  for(j=1;j<=i;j++)
  {
   printf("*");
  }
  printf("\n");
}
  for(k=1;k<=4;k++)
 {
  for(l=1;l<=5-k;l++)
  {
   printf("*");
  }
  for(l=1;l<=8-2*(5-k);l++)
  {
   printf(" ");
  }
  for(l=1;l<=5-k;l++)
  {
   printf("*");
  }
  printf("\n");
 }
 return 0;
}

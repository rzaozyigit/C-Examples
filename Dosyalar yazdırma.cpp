#include <stdio.h>

int main()
{
 FILE *dosya;
    dosya=fopen("boss.txt","w");
   	fputs("R�za �ZY���T\nM�hendis",dosya);
  	fclose(dosya);
  return 0;
}


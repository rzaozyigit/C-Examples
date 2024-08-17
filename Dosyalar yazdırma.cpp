#include <stdio.h>

int main()
{
 FILE *dosya;
    dosya=fopen("boss.txt","w");
   	fputs("Rýza ÖZYÝÐÝT\nMühendis",dosya);
  	fclose(dosya);
  return 0;
}


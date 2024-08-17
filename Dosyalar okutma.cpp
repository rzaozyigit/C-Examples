#include <stdio.h>
#include <conio.h>
int main(){
 char karakter;
 FILE *dosya;
 dosya=fopen("boss.txt","r");
 while(!feof(dosya)){
   karakter=getc(dosya);
   printf("%c",karakter);
 }
   fclose(dosya);	
 getch();
 return 0;
 }



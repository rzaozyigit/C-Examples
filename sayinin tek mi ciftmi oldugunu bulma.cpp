#include <stdio.h>
#include <conio.h>
int main()
	{
		int sayi;
		
		printf("bir sayi girin");
		scanf("%d",&sayi);
		
		if(sayi % 2 == 0){
		printf("sayi cifttir.\n");
		}
		else{
		printf("sayi tektir.\n");
		}
		getch();
		return 0;
		}





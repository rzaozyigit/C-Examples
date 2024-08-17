#include <stdio.h>
#include <conio.h>

int main(){
	
	int puan;
	printf("notunuzu giriniz");
	scanf("%d",&puan);
	
	if(puan<=100 && puan>=90){
		printf("harf notunuz AA'dir. :%d",puan);
		
	}
	else if(puan<90 && puan>=80){
		printf("harf notunuz BB'dir. :%d",puan);
		
	}
	else if(puan<80 && puan>=70){
		printf("harf notunuz CC'dir. :%d",puan);
		
	}
	else if(puan<70 && puan>=60){
		printf("harf notunuz DD'dir. :%d",puan);
		
	}
	else if(puan<60 && puan>=40){
		printf("harf notunuz EE'dir. :%d",puan);
		
	}
	else if(puan<39 && puan>=0){
		printf("harf notunuz FF'dir.Bu dersten kaldýnýz. :%d",puan);
		
	}
	else 
	 printf("lutfen gecerli puanlama sistemine gore giriniz. :%d",puan);
	getch();
	return 0;
}

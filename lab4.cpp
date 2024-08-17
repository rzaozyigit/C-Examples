#include <stdio.h>  
#include <stdlib.h>
  int main()
   {
      float addition (float a, float b);
      float multipication (float a, float b);
      float division (float a, float b);
      float substraction(float a, float b);
      float a,b,sonuc;
      char secim;
      printf ("enter number a = ");
      scanf ("%d",&a);
      printf ("enter number b = ");
      scanf("%d",&b);
	  printf ("..select operation[+ , * , / , -]..");
	  scanf("%d %c",secim);
      secim = getchar();
	  switch(secim)
      {
      case '+' :
      	  addition(a,b);
          printf("The result of the collection is %d..",sonuc);
          sonuc = a+b;
      break;

      case '*' :
      	  multipication(a,b);
          printf("The result of extraction is %d..",sonuc);
          sonuc = a*b;
      break;

      case '/' :
      	  division(a,b);
          printf("The result of multiplication is %d..",sonuc);
          sonuc = a/b;
      break;

      case '-' :
      	  substraction(a,b);
          printf("The result of the division is %d..",sonuc);
          sonuc = a-b;
      break;
  
      }
	  getchar();
      return 0;
  } /*
  float addition(float a, float b)
  {
  	float addition;
  	addition = a + b;
  	return addition;
  }
  float multipication(float a, float b)
  {
  	float multipication;
  	multipication = a * b;
  	return multipication;
  }
  float division(float a, float b)
  {
  	float division;
  	division = a / b;
  	return division;
  }
  float substraction(float a, float b)
  {
  	float substraction;
  	substraction = a - b;
  	return substraction;*/
  


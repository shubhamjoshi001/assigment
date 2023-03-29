/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)*/
#include<stdio.h>
 main()
 
 
 {
 	float a,b,c,d,f,g;
 	int h,i,j;
 
 	printf("ENTER THE VALUE OF A:");
 	scanf("%f",&a);
  
 	printf("ENTER THE VALUE OF B:");
	scanf("%f",&b);
	
	printf("ENTER THE VALUE OF I:");
	scanf("%d",&i);
	
	printf("ENTER THE VALUE OF J:");
	scanf("%d",&j);
  

	 c=a+b;
	 d=a-b;
	 f=a*b;
	 g=a/b;
	 h=i%j;
	printf("\nVALUE OF sum=%f",c);
	printf("\nVALUE OF sub=%f",d);
	printf("\nVALUE OF multi=%f",f);
	printf("\nVALUE OF division =%f",g);
	printf("\nVALUE OF module=%d",h);  
}

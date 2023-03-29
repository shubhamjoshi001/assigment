//WAP to swap two numbers without using third variable

//PROGRAM:-

#include<stdio.h>  
main()    
{    
int a, b;   
printf("ENTER YOUR A\n");
	scanf("%d",&a);
printf("ENTER YOUR B\n");
	scanf("%d",&b);   

printf("Before swap a=%d b=%d",a,b);
      
a=a+b;    
b=a-b;    
a=a-b; 
   
printf("\nAfter swap a=%d b=%d",a,b);    
 
}   

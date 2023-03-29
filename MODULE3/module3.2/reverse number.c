// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

//PROGRAM:-

#include <stdio.h>

main()

{
    int n,r,rev=0,a;

    printf("Input a number: ");
    scanf("%d",&n);
    

    for(a=n;n!=0;n=n/10)
	
	{
		 
         r=n % 10;
         rev=rev*10+r;
    }
    
    
		printf("The number in reverse order is : %d \n",rev);
}

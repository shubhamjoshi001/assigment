//WAP to print Fibonacci series up to given numbers

//PROGRAM:-

#include<stdio.h>
main()
{
	int i,n,a=0,b=1,c;
	
	

	printf("ENTER NUMBER:");
	scanf("%d",&n);
	 
	printf("The series is:\n");

	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		
	
		
	}

}

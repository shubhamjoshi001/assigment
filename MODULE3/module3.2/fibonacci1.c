//WAP to print Fibonacci series up to given numbers

//PROGRAM:-

#include<stdio.h>
main()
{
	int i,n,a=0,b=1,c;
	
	c=a+b;

	printf("ENTER NUMBER:");
	scanf("%d",&n);
	 
	printf("The series is:%d%d",a,b);

	
	for(i=3;i<=n;i++)
	{
		printf("%d",c);
		
		a=b;
		b=c;
		c=a+b;
	
		
	}

}

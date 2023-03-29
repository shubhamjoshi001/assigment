//WAP to print factorial of given number

//PROGRAM:-

#include<stdio.h>
main()
{
	int i, fact=1,n;
	
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("FACTORIAL OF GIVEN NUMBER: %d",fact);
}

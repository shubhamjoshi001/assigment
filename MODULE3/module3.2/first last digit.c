//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

//PROGRAM:-

#include<stdio.h>
main()
{
	int n,sum=0,firstdigit,lastdigit;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	lastdigit = n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	sum=firstdigit+lastdigit;
	printf("SUM OF FIRST AND LAST DIGIT : %d",sum);
}

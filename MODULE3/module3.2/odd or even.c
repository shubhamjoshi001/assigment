/*Looping programs:
1. WAP to print 972 to 897 using for loop
2. WAP to take 10 no. Input from user and find out ...
3. How many Even numbers are there
4. How many odd numbers are there
5. Sum of even numbers
6. Sum of odd numbers WAP to print table up to given numbers*/

//PROGRAM:-

#include<stdio.h>
main()
{
	int n,i, counteven=0,countodd=0,sumeven=0,sumodd=0;
	for(i=1;i<=10;i++)
	{
		printf("enter number %d:",i);
		scanf("%d",&n);
		if(n%2==0)
		{
			counteven++;
			sumeven=sumeven+n;
			
		}
		else
		{
			countodd++;
			sumodd=sumodd+n;
		}
	}
	printf("total even number is: %d\n",counteven);
	printf("total odd number is: %d\n",countodd);
	printf("sum even number is: %d\n",sumeven);
	printf("sum odd number is: %d\n",sumodd);
}

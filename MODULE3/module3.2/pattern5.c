#include<stdio.h>
main()
{
	int i, j, n=1, r;
	
	printf("enter number:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3d",n);
			n++;
		}
		printf("\n");
	}
 } 

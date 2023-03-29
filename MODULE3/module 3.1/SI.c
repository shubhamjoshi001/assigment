//WAP to find simple interest
#include<stdio.h>
main()
{
	float p,n,r,SI;
	printf("ENTER THE VALE OF P:");
	scanf("%f",&p);
	
	printf("ENTER THE VALE OF N:");
	scanf("%f",&n);
	
	printf("ENTER THE VALE OF R:");
	scanf("%f",&r);
	
	SI=p*n*r/100;
	
	printf("SIMPLE INTREST : %f", SI);

}

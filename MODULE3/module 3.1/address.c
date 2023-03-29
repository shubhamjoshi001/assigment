//Display This Information using printf your address......
#include<stdio.h>

main()
{
	int n, p;
	
	char village[20], dist[20], state[20], m[20];
	 
	 printf("Enter the house no. :");
	 scanf("%d",&n);
	 
	 fflush(stdin);
	 printf("\nEnter the village :");
	 scanf("%s",village);
	 
	 fflush(stdin);
	 printf("\nEnter the dist:");
	 scanf("%s",dist);
	 
	 fflush(stdin);
	 printf("\nEnter the state:");
	 scanf("%s",state);
	 
	 fflush(stdin);
	 printf("\nEnter the pincode:");
	 scanf("%d",&p);
	 
	 printf("\nEnter the mobile no.:");
	 scanf("%s",&m);
	 
	 printf("\nAddress=%d,%s,%s,%s,%d",n,village,dist,state,p);
	 
	 printf("\nmobile no.=%s",m);
	 
	 
}

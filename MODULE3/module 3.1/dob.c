//Display This Information using printf your DOB.....
#include<stdio.h>
main()
{
	int d, m, y;
	 printf("Enter the date:");
	 scanf("%d",&d);
	 
	  printf("Enter the month:");
	 scanf("%d",&m);
	 
	  printf("Enter the year:");
	 scanf("%d",&y);
	 
	 printf("The date of birth=%d/%d/%d",d/m/y);
}

#include<stdio.h>
main ()
{
	int days, years, nodays;
	
	printf("TOTAL NO. DAYS:");
	scanf("%d",&days);
	
	nodays=days;
	days=days%365;
	years=nodays/365;
	
	printf("\n%d years",years);
	printf("\n%d days", days);
}

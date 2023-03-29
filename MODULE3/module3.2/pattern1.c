#include <stdio.h>

main()

{

	int i, j, r,k;
	
	printf("ENTER THE VALUE ");
	scanf("%d",&r);
	
		for ( i = 0; i < r; i++) 
		
			{
			for (j = 0; j <= i; j++) 
				{ 
				if(j%2)
				{
					printf("0");
				}
				else
				{
					printf("1");
				}    
				
				}
			
		printf("\n"); 
			
			 }
	
	}


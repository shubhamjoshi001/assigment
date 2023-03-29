//WAP to find area of circle
#include <stdio.h>
main()
 {
   float  area, pie = 3.14;
   float radius;
   
   printf("ENTER THE VALE OF R:");
   scanf("%f",&radius);
   
   area = pie* radius * radius;
   
   printf("The area of the given circle is %f", area);
   
}

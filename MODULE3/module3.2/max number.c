//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

//PROGRAM:-

#include<stdio.h>  
  
int main()  
{  
    int limit, max, count, num;  
  
    printf("Enter the limit\n");  
    scanf("%d", &limit);  
  
    printf("Enter %d numbers\n", limit);  
    for(count = 1; count <= limit; count++)  
    {  
        scanf("%d", &num);  
  
        if(num > max || count == 1)  
        {  
            max = num;  
        }  
    }  
  
    printf("Max number is %d\n", max);  
  
  
}  

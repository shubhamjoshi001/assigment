//Write a program make a summation of given number (E.g., 1523 Ans: -11)

//PROGRAM:

#include <stdio.h>

int main()
{
    int num, sum=0;

   
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);

  
    while(num!=0)
    {
        
        sum = sum+num % 10;

       
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

  
}

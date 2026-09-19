/*
    write a program to calculate & display compound interest of given amount, rate, year
    input : num 5 :  process : 5 x 4 x 3 x 2 x 1 output : 120
    input : num 4 :  process : 4 x 3 x 2 x 1     output : 24
*/
#include <stdio.h>
void main()
{
    int num = 0,factorial=1;
    printf("Enter number for factorial");
    scanf("%d",&num);
    while(num>=1)
    {
        //loop body
        factorial = factorial * num; //5
        num = num - 1; //4
    }
    printf("factorial = %d",factorial);

}
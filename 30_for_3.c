/*
   write a program to print display sum of all digits in given amount
   input : amount 12345 process 1 + 2 + 3 + 4 + 5 output : 15
*/
#include <stdio.h>
void main()
{
    int amount, sum, reminder;
    printf("enter amount");
    scanf("%d",&amount);
    for(sum=0;amount>0;amount = amount / 10)
    {
        //loop body 
        reminder = amount % 10; // 5
        sum = sum + reminder;   // 5
    }
    printf("sum of all digits = %d", sum);
}
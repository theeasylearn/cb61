/*
   write a program to print findout whether given 3 digit number is armstrong number or not
   input : amount 153 
   process 1 = (1 x 1 x 1) = 1
           5 = (5 x 5 x 5) = 125
           3 = (3 x 3 x 3) = 27
           ----------------= 153
    after the process if sum and original amount is same then number then amount is armstrong number otherwise is not armstrong
*/
#include <stdio.h>
void main()
{
    int amount, sum, reminder,original_amount;
    printf("enter amount");
    scanf("%d",&amount); //153
    original_amount = amount; //153
    for(sum=0;amount>0;amount = amount / 10) //0
    {
        //loop body 
        reminder = amount % 10; // 1
        reminder = reminder * reminder * reminder; //1
        sum = sum + reminder;   // 153
    }
    if(original_amount<10 || original_amount == sum)
    {
        printf("given number is armstrong number");
    }
    else 
    {
        printf("given number is not armstrong number");
    }
}
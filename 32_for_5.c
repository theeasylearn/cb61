/*
   write a program to findout whether given number is palindrome or not
   input : number 12321
   process : reverse the number and check if reversed number and original numbers are same or not. if reversed number is same as original number then given number is palindrome number otherwise it is not palindrome number
*/
#include <stdio.h>
void main()
{
    int num, reminder, original, reversed;
    printf("Enter number to check whether it is palindrome or not");
    scanf("%d",&num);
    for(reversed = 0,original=num;num>0 && original>10;num=num/10)
    {
        //loop body
        reminder = num % 10;                   // 1
        reversed = (reversed * 10) + reminder; // 1
    }
    printf("\n original %d reverse = %d \n ",original,reversed);
    if(reversed == original)
    {
        printf("given number is palindrome number");
    }
    else 
    {
        printf("number is not palindrome number");
    }
}
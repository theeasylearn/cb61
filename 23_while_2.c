/*
    write a program to print following series
    1 3 5 7 9 11 13 15 ....... 99
*/
#include<stdio.h>
void main()
{
    int num = 1;
   
    while(num<=99) //5<99
    {
         printf("%d ",num); // 1
        num = num + 2; //7
    }
    printf("\n good bye");
}
/*
    write a program to print following series
    100 98 96 94 92 ...... 0
*/
#include<stdio.h>
void main()
{
   int num = 100;

   while(num>=0)
   {
        printf("%d ",num);
        num = num - 2; //98
   }
   

    
}
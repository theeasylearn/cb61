/*
    write a program to print following series
    num 1 2 4 7 11 16 ..... 100
    gap 0 1 2 3 4  5
*/
#include <stdio.h>
void main()
{
    int num = 1, gap = 0;

    while(num<92) //2<=100
    {
        //loop body
        num += gap; // 2
        printf("%d ", num);//2
        gap++; // 2
    }
}
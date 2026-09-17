/*
    write a program to findout largest number from 3 given number
*/
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("enter number 1");
    scanf("%d",&num1); //10

    printf("enter number 2");
    scanf("%d",&num2); //20

    printf("enter number 3");
    scanf("%d",&num3); //25

    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("num1 is the largest number %d",num1);
        }
        else 
        {
            printf("num3 is the largest number %d",num3);
        }
    }
    else 
    {
        if(num2>num3)
        {
            printf("num2 is the largest number %d",num2);
        }
        else 
        {
            printf("num3 is the largest number %d",num3);
        }
    }
}
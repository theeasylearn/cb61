/*
    write a program to display season named based upon month number given by user
    input : 1 output : winter
    input : 5 output : summer
    input : 8 output : monsoon
    December – February (Months 12, 1, 2): Winter
    March – May (Months 3, 4, 5): Summer
    June – September (Months 6, 7, 8, 9): Monsoon (Rainy)
    October – November (Months 10, 11): Autumn
*/
#include <stdio.h>
void main()
{
    int month;
    printf("Enter months");
    scanf("%d", &month);
    if (month == 1 || month == 2 || month == 12)
    {
        printf("it is winter month");
    }
    else if (month == 4 || month == 5 || month == 3)
    {
        printf("it is summer month");
    }
    else if (month == 7 || month == 8 || month == 9 || month == 6)
    {
        printf("it is monsoon month");
    }
    else if (month == 10 || month == 11)
    {
        printf("it is Autumn month");
    }
    else
    {
        printf("it is not valid month");
    }
}
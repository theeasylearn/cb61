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

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        printf("it is winter month");
        break;
    case 3:
    case 4:
    case 5:
        printf("it is summer month");
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        printf("it is monsoon month");
        break;
    case 10:
    case 11:
        printf("it is Autumn month");
        break;
    default:
        printf("it is not valid month");
        break;
    }
}
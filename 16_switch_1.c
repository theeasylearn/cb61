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
        printf("it is winter month");
        break;
    case 1:
        printf("it is winter month");
        break;
    case 2:
        printf("it is winter month");
        break;
    case 3:
        printf("it is summer month");
        break;
    case 4:
        printf("it is summer month");
        break;
    case 5:
        printf("it is summer month");
        break;
    case 6:
        printf("it is monsoon month");
        break;
    case 7:
        printf("it is monsoon month");
        break;
    case 8:
        printf("it is monsoon month");
        break;
    case 9:
        printf("it is monsoon month");
        break;
    case 10:
        printf("it is Autumn month");
        break;
    case 11:
        printf("it is Autumn month");
        break;
    default:
        printf("it is not valid month");
        break;
    }
}
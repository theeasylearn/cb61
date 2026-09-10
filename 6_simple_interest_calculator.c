// write a program to calculate & display simple interest of given amount, rate & year
#include<stdio.h>
void main()
{
    float amount,rate,year,interest;
    printf("enter amount");
    scanf("%f",&amount);

    printf("enter rate");
    scanf("%f",&rate);

    printf("enter year");
    scanf("%f",&year);

    //process
    interest = (amount * rate * year) / 100;
    printf("\n simple interest = %.2f",interest);

}
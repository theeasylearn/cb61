/*
    write a program to calculate & display compound interest of given amount, rate, year

*/
#include <stdio.h>
void main()
{
    int amount, year;
    float rate, interest, total_interest = 0;

    printf("Enter amount");
    scanf("%d", &amount);

    printf("Enter rate");
    scanf("%f", &rate);

    printf("Enter year");
    scanf("%d", &year); //5

    while(year>=1) // 5 4 3 2 1
    {
        interest = (amount * rate * 1) / 100;
        amount = amount + interest;
        total_interest = total_interest + interest;
        year = year - 1;
    }
    printf("Total compound intereest = %.2f",total_interest);
}
// How to Calculate Leap Years
#include <stdio.h>
void main()
{
    int year;
    int reminder1,reminder2,reminder3;
    printf("\n enter year");
    scanf("%d",&year); //2000
    reminder1 = year % 4; //0
    reminder2 = year % 100; //0
    reminder3 = year % 400; //0
    if(reminder1==0 && reminder2!=0)
    {
        printf("it is leap year");
    }
    else 
    {
        if(reminder2==0 && reminder3==0)
        {
            printf("it is leap year");
        }
        else 
        {
            printf("it is not leap year");
        }
    }
}
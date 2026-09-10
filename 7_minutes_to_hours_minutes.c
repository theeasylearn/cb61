// write a program to convert given minutes into hours and remaining minutes 
/* 
    input : minutes = 90 output : 1 hours 30 minutes 
    input : minutes = 129 output : 2 hours 9 minutes 
*/
#include <stdio.h>
void main()
{
    int minutes,hours;
    printf("enter total minutes");
    scanf("%d",&minutes);

    hours = minutes / 60; //1
    minutes = minutes % 60; //30

    printf("%d hours %d minutes",hours,minutes);
}
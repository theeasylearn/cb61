// write a program to findout & display area of room from user given length and width 
#include<stdio.h>
void main()
{
    float length,width,area;

    printf("Enter length");
    scanf("%f",&length); //20

    printf("Enter width");
    scanf("%f",&width); //15

    //process 
    area = length * width;

    //display
    printf("area = %.2f",area);
}
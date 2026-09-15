// write a program to findout which person is taller in 2 person's given height
#include<stdio.h>
void main()
{
    float height_1,height_2;
    printf("enter 1st person height");
    scanf("%f",&height_1);

    printf("enter 2nd person height");
    scanf("%f",&height_2);

    if(height_1>height_2)
    {
        printf("1st person is taller person");
    }
    else 
    {
        printf("2nd person is taller person");
    }
    printf("\n good bye");
}
#include<stdio.h>
void main()
{
    //create variable
    //store user's age 
    int age;
    //store user'weight
    float weight;
    //store user's name 1st letter 
    char letter;

    //to display output, use print function
    //%d = integer, %f = float, %c = char they are collectively format specifier 
    printf("age = %d",age);
    printf("\nweight = %f",weight);
    printf("\nletter = %c",letter);

    //take user input & store in variables
    printf("\nenter 1st letter of your name");
    scanf("%c",&letter);

    printf("\n enter your weight");
    scanf("%f",&weight);

    printf("\n enter your age");
    scanf("%d",&age);

    printf("\n age = %d",age);
    printf("\n weight = %.2f",weight);
    printf("\n letter = %c",letter);
}
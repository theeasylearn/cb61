//write a program to make addition, subtraction, multiplication, division on two numbers given by user and display result of all operations
#include<stdio.h>
void main()
{
    //create variables 
    int num1,num2,addition,subtraction,multiplication;
    float division;
    //input
    printf("enter number 1");
    scanf("%d",&num1); // 10

    printf("enter number 2");
    scanf("%d",&num2); // 20

    //process (format)
    //variable-1 = variable-2 operator/symbol variable-3
    addition = num1 + num2;

    subtraction = num1 - num2; //-10

    multiplication = num1 * num2; // 200
    
    division = (float) num1 / num2; //0.5

    //display variables
    printf("addition = %d",addition);
    printf("\nsubtraction = %d",subtraction);
    printf("\n multiplication = %d",multiplication);
    printf("\n division = %.2f",division);

}
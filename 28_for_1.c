/*
   write a program to print multiplication table of given number in below format
   input : 5 
   output 
   5 x 1 = 5 
   5 x 2 = 10 
   5 x 3 = 15
   5 x 10 = 50
*/
#include <stdio.h>
void main()
{
    int num=5, multiplier,answer;

    printf("Enter number");
    scanf("%d", &num); //5
    for(multiplier = 1;multiplier<=10; multiplier++)
    {
        answer = num * multiplier; //10
        printf("%d X %2d = %2d\n",num,multiplier,answer);
    }
    printf("good bye");
}
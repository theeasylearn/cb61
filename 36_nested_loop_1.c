#include <stdio.h>
/*
    left aligned triangle
    *
    * *
    * * *
    * * * *
    * * * * *
*/
void main()
{
    for(int row =1;row<=5;row++)
    {
        for (int column = 0; column < row; column++) //inner loop
        {
            printf("* ");
        }
        printf("\n");
    }
}
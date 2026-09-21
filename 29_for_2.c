/*
   write a program to print ascii table of all the upper case letter
   output
   A = 65
   B = 66
   C = 67
   ...
   Z = 90
*/
#include <stdio.h>
void main()
{
    int ascii;
    char letter;

    
    for(ascii = 65;ascii<=90;ascii++)
    {
        letter = ascii; // store character code using value in ascii variable
        printf("%c = %d \n", letter, ascii);
    }
}
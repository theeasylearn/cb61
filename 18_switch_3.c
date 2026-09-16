/*
    write a program to findout & display given letter is vowel or not 
    input : a output it is vowel
    input : e output it is vowel
    input : i output it is vowel
    input : o output it is vowel
    input : u output it is vowel
    input : x output it is not consonant
*/
#include <stdio.h>
void main()
{
    char letter;
    printf("Enter any on letter");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a':
        case 'A':
        printf("it is vowel");
        break;
        case 'e':
        case 'E':
        printf("it is vowel");
        break;
        case 'i':
        case 'I':
        printf("it is vowel");
        break;
        case 'o':
        case 'O':
        printf("it is vowel");
        break;
        case 'u':
        case 'U':
        printf("it is vowel");
        break;
        default:
        printf("it is consonant");
        break;
    }
}
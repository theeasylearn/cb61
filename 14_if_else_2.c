// write a program to findout whether given shape is landscape or portrait
#include<stdio.h>
void main()
{
    int length,width;
    printf("\n enter length");
    scanf("%d",&length);

    printf("\n enter width");
    scanf("%d",&width);

    if(length<width)
    {
        printf("shape is landscape");
    }
    else 
    {
        printf("shape is portrait");
    }
    printf("\n good bye");
}
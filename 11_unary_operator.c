#include<stdio.h>
void main()
{
    int a = 10, b;

    // a = a + 1;
    // b = a;
    //  or 
    b = ++a; //prefix (first a increase by 1 and then new value of a assigned to b)
    printf("a = %d b = %d",a,b);

    a = 10;
    b = 0;

    // b = a;
    // a = a + 1;
    // or
    b = a++;
    printf("\n a = %d b = %d",a,b);
}
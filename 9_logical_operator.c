//relational operators
#include<stdio.h>
void main()
{
    int a = 10, b = 11, c = 12,result;
    
    result = a < b && b < c; //10 < 11 && 11 < 12
    printf("%d == %d < %d && %d < %d\n",result,a,b,b,c);

    result = a < b || b < c; //10 < 11 || 11 < 12
    printf("%d == %d < %d || %d < %d \n",result,a,b,b,c);

    result = a < b || b > c; //10 < 11 || 11 > 12
    printf("%d == %d < %d || %d > %d \n",result,a,b,b,c);

    result = a > b || b < c; //10 < 11 || 11 < 12
    printf("%d == %d > %d || %d < %d \n",result,a,b,b,c);

    result = a > b || b > c; //10 > 11 || 11 > 12
    printf("%d == %d > %d || %d > %d \n",result,a,b,b,c);

    result = !(a < b);
    printf("!%d == %d < %d",result,a,b);


}
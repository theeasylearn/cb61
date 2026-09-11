//relational operators
#include<stdio.h>
void main()
{
    int a = 10, b = 11, c = 12,result;
    
    //relational expression
    result = a == b;
    printf("%d = %d == %d \n",result,a,b); // 0 = 10 == 11
    
    result = a == 10;
    printf("%d = %d == 10 \n",result,a); // 0 = 10 == 11

    result = a != b;
    printf("%d = %d != %d \n",result,a,b);

    result = a < b;
    printf("%d = %d < %d \n",result,a,b);

    result = a > b;
    printf("%d = %d > %d \n",result,a,b);

    result = a <= b;
    printf("%d = %d <= %d \n",result,a,b);

    result = a >= b;
    printf("%d = %d >= %d \n",result,a,b);

    
}
//example of assignment operators in c language 
#include<stdio.h>
void main()
{
    int a = 10, b = 2;

    // a = a + b; // 12
    a+=b;
    printf("\n after addition a = %d",a);

    // a = a - b; //10
    a-=b;
    printf("\n after subtraction a = %d",a);

    // a = a * b; // 20
    a*=b;
    printf("\n after multiplication a = %d",a);

    // a = a / b; // 10;
    a/=b;
    printf("\n after division a = %d",a);

    // a = a % b; //0
    a%=b;
    printf("\n after modulus a = %d",a);

}
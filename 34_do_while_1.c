// example of do while loop
// write a program to find out whether given the Composite number or not
#include <stdio.h>
#include <math.h>
void main()
{
    float square_root;
    double num;
    int deviser, reminder;
    printf("enter number");
    scanf("%lf", &num);
    square_root = sqrt(num);
    // printf("Square root is %lf", square_root);
    deviser = 2;
    do
    {
        // loop body
        reminder = (int)num % deviser; // 2
        // printf("reminder %d", reminder);
        if (reminder == 0.0)
        {
            printf("%lf is composite number", num);
            break; //
        }
        deviser++;
    } while (deviser <= square_root);
    if (deviser > square_root)
    {
        printf("%lf is not composite number", num);
    }
}
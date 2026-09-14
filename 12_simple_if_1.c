// write a program to findout & display profit or loss amount from given purchase price and sales price. 
// purchase price 20 sales price 30 : sales price (30) - purchase price(20) = 10 profit
// purchase price 40 sales price 35 : sales price (35) - purchase price(40) = -5 loss 
#include<stdio.h>
void main()
{
    int purchase_price,sales_price,difference;
    printf("Enter product purchase price");
    scanf("%d",&purchase_price);

    printf("Enter sales price");
    scanf("%d",&sales_price);

    //process 
    difference = sales_price - purchase_price;

    if(difference<0) // < <= > >= == !=
    {
        //conditional statement
        printf("loss amount = %d",difference);
    }
    
    if(difference>0) 
    {
         //conditional statement
        printf("profit amount = %d",difference);
    }

    if(difference==0)
    {
        printf("no profit no loss");
    }
}
// example of do while loop
// write a program to print ascii table of a to z alphabets
/*
a	97	n	110
b	98	o	111
c	99	p	112
d	100	q	113
e	101	r	114
f	102	s	115
g	103	t	116
h	104	u	117
i	105	v	118
j	106	w	119
k	107	x	120
l	108	y	121
m	109	z	122
*/
#include <stdio.h>
void main()
{
    int ascii = 97;
    char alphabet;
    do
    {
        alphabet = ascii;
        printf("alphabet = %c ascii = %d \n",alphabet,ascii);
        ascii = ascii + 1;
    }while(ascii<=122);

    
}
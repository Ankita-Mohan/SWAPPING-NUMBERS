#include<stdio.h>
//PROGRAM TO SWAP TWO NUMBERS WITHOUT USING ANY TEMPORARY VARIABLE
int main()
{
    int a, b;   //Initialisation of a and b
    printf("ENTER THE VALUE of a and b respectively\n"); 
    scanf("%d %d", &a, &b); /* To take input of a anb b from user and lets consider
                                a=10 and b=20 */
    printf("BEFORE SWAPPING  a=%d and b=%d \n", a, b); //a=10 and b=20
    a = a + b; // here a will become 10+20=30 means NOW a=30
    b = a - b; // here b will become 30-20=10 means b=10 
    a = a - b; // here a will now become 30-10=20 means NEW VALUE OF a=20
    printf("AFTER SWAPPING a=%d and b=%d \n", a, b); // Now a=20 and b=10
    return 0;
}
//program created by Ankita

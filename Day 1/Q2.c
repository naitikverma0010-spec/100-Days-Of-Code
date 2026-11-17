/*
Question 2: Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    printf("Sum=%d, Diff=%d, Product=%d", a + b, a - b, a * b);
    if (b)
        printf(", Quotient=%d", a / b);
    else
        printf(", Quotient=undefined");
    return 0;
}

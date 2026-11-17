/*
Question 7: Write a program to swap two numbers without using a third variable.
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("After swap: %d %d", a, b);
}

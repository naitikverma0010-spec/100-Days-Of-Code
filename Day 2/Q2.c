/*
Question 4: Write a program to calculate the area and circumference of a circle given its radius.
*/

#include <stdio.h>

int main()
{
    double r;
    double pi = 3.141592653589793;
    scanf("%lf", &r);
    printf("Area=%.2f, Circumference=%.2f", (pi * r) * r, (2 * pi) * r);
}

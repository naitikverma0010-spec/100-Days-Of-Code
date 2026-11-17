/*
Question 3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include <stdio.h>

int main()
{
    double l;
    double b;
    scanf("%lf%lf", &l, &b);
    printf("Area=%g, Perimeter=%g", l * b, 2 * (l + b));
}

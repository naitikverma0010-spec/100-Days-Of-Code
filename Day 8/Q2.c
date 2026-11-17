/*
Question 16: Input three numbers and find the largest among them.
*/

#include <stdio.h>

int main()
{
    double a;
    double b;
    double c;
    double m;
    scanf("%lf%lf%lf", &a, &b, &c);
    m = (a > b) ? (a) : (b);
    m = (m > c) ? (m) : (c);
    printf("Largest is %g", m);
}

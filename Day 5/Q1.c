/*
Question 9: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double p;
    double r;
    double t;
    scanf("%lf%lf%lf", &p, &r, &t);
    double si = ((p * r) * t) / 100;
    double ci = (p * pow(1 + (r / 100), t)) - p;
    printf("Simple Interest=%g, Compound Interest=%.2f", si, ci);
}

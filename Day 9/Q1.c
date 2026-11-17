/*
Question 17: Find the roots of a quadratic equation and categorize them.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;
    double c;
    double d;
    scanf("%lf%lf%lf", &a, &b, &c);
    d = (b * b) - ((4 * a) * c);
    if (d > 0)
        printf("Roots are real and different: %g, %g", ((-b) + sqrt(d)) / (2 * a), ((-b) - sqrt(d)) / (2 * a));
    else
        if (d == 0)
        printf("Roots are real and same: %g", (-b) / (2 * a));
    else
        puts("Roots are complex");
}

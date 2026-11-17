/*
Question 22: Find profit or loss percentage given cost price and selling price.
*/

#include <stdio.h>

int main()
{
    double c;
    double s;
    scanf("%lf%lf", &c, &s);
    if (s > c)
        printf("Profit %.2f%%", ((s - c) * 100) / c);
    else
        if (s < c)
        printf("Loss %.2f%%", ((c - s) * 100) / c);
    else
        puts("No Profit No Loss");
}

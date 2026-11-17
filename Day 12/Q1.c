/*
Question 23: Calculate library fine based on late days.
*/

#include <stdio.h>

int main()
{
    int d;
    int f;
    if (scanf("%d", &d) != 1)
        return 0;
    if (d > 30)
        puts("Membership Cancelled");
    else
    {
        f = (d <= 5) ? (2 * d) : ((d <= 10) ? (10 + (4 * (d - 5))) : (30 + (6 * (d - 10))));
        printf("Fine Rs %d", f);
    }
}

/*
Question 44: Find the sum of series 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
*/

#include <stdio.h>

int main()
{
    int n;
    double s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        s += ((2.0 * i) + 1) / ((2 * i) + 2);

    printf("%.2f", s);
}

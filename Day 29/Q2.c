/*
Question 58: Find the maximum and minimum element in an array.
*/

#include <stdio.h>

int main()
{
    int n;
    int a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int mn = a[0];
    int mx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
        if (a[i] > mx)
            mx = a[i];
    }

    printf("Max=%d, Min=%d", mx, mn);
}

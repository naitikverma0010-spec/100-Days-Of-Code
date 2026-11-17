/*
Question 65: Search in a sorted array using binary search.
*/

#include <stdio.h>

int main()
{
    int n;
    int a[100];
    int x;
    int l = 0;
    int r;
    int ans = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);
    r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            ans = m;
            break;
        }
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    if (ans >= 0)
        printf("Found at index %d", ans);
    else
        puts("-1");
}

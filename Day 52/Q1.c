/*
Question 102: Find the first index of the smallest sorted-array element greater than or equal to x (ceil index).
*/

#include <stdio.h>

int main()
{
    int n;
    int a[1000];
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
        if (a[m] >= x)
        {
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }

    printf("%d", ans);
}

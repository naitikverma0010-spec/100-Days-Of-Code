/*
Question 107: For each array element, print the nearest greater element on its left; use brute force.
*/

#include <stdio.h>

int main()
{
    int n;
    int a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        int ans = -1;
        for (int j = i - 1; j >= 0; j--)
            if (a[j] > a[i])
        {
            ans = a[j];
            break;
        }

        printf("%d%s", ans, (i == (n - 1)) ? ("") : (", "));
    }

}

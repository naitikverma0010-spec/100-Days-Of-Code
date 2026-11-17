/*
Question 76: Check if a matrix is symmetric.
*/

#include <stdio.h>

int main()
{
    int n;
    int m;
    int a[20][20];
    int ok = 1;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        scanf("%d", &a[i][j]);

    if (n != m)
        ok = 0;
    for (int i = 0; (i < n) && ok; i++)
        for (int j = 0; j < n; j++)
        if (a[i][j] != a[j][i])
        ok = 0;

    puts((ok) ? ("True") : ("False"));
}

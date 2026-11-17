/*
Question 77: Check if the elements on the diagonal of a matrix are distinct.
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

    for (int i = 0; (i < n) && (i < m); i++)
        for (int j = 0; j < i; j++)
        if (a[i][i] == a[j][j])
        ok = 0;

    puts((ok) ? ("True") : ("False"));
}

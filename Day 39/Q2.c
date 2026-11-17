/*
Question 78: Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main()
{
    int n;
    int m;
    int a[20][20];
    int s = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
    {
        scanf("%d", &a[i][j]);
        if (i == j)
            s += a[i][j];
    }

    printf("%d", s);
}

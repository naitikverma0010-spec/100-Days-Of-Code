/*
Question 75: Add two matrices.
*/

#include <stdio.h>

int main()
{
    int r;
    int c;
    int a[20][20];
    int b[20][20];
    int r2;
    int c2;
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        scanf("%d", &a[i][j]);

    scanf("%d%d", &r2, &c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
        scanf("%d", &b[i][j]);

    if ((r != r2) || (c != c2))
        return 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);

        puts("");
    }

}

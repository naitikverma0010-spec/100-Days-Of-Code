/*
Question 71: Read and print a matrix.
*/

#include <stdio.h>

int main()
{
    int r;
    int c;
    int a[20][20];
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);

        puts("");
    }

}

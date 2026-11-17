/*
Question 117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/

#include <stdio.h>

int main(void)
{
    int m;
    int n;
    int a[1000];
    int b[1000];
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0;
    int j = 0;
    int first = 1;
    while ((i < m) || (j < n))
    {
        int v;
        if ((j >= n) || ((i < m) && (a[i] <= b[j])))
            v = a[i++];
        else
            v = b[j++];
        printf("%s%d", (first) ? ("") : (" "), v);
        first = 0;
    }

    return 0;
}

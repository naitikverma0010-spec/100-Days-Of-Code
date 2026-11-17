/*
Question 113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int x = *((const int *) a);
    int y = *((const int *) b);
    return (x > y) - (x < y);
}

int main(void)
{
    int n;
    int k;
    int a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);
    qsort(a, n, sizeof(int), cmp);
    if ((k >= 1) && (k <= n))
        printf("%d", a[k - 1]);
    return 0;
}

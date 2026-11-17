/*
Question 70: Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main()
{
    int n;
    int a[100];
    int k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);
    k %= n;
    for (int i = n - k; i < n; i++)
        printf("%d ", a[i]);

    for (int i = 0; i < (n - k); i++)
        printf("%d ", a[i]);

}

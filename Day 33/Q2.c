/*
Question 66: Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main()
{
    int n;
    int a[101];
    int x;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);
    for (i = n; (i > 0) && (a[i - 1] > x); i--)
        a[i] = a[i - 1];

    a[i] = x;
    n++;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

}

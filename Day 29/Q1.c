/*
Question 57: Find the sum of array elements.
*/

#include <stdio.h>

int main()
{
    int n;
    int a[100];
    int s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s += a[i];
    }

    printf("%d", s);
}

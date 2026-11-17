/*
Question 69: Find the second largest element in an array.
*/

#include <stdio.h>

int main()
{
    int n;
    int a[100];
    int m1 = -2147483648;
    int m2 = -2147483648;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > m1)
        {
            m2 = m1;
            m1 = a[i];
        }
        else
            if ((a[i] > m2) && (a[i] != m1))
            m2 = a[i];
    }

    printf("%d", m2);
}

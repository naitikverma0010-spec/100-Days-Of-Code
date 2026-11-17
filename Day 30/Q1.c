/*
Question 59: Count even and odd numbers in an array.
*/

#include <stdio.h>

int main()
{
    int n;
    int x;
    int e = 0;
    int o = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        (x % 2) ? (o++) : (e++);
    }

    printf("Even=%d, Odd=%d", e, o);
}

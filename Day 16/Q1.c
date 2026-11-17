/*
Question 31: Take a number as input and print its binary representation.
*/

#include <stdio.h>

int main()
{
    unsigned n;
    scanf("%u", &n);
    if (!n)
    {
        puts("0");
        return 0;
    }
    int b[32];
    int k = 0;
    while (n)
    {
        b[k++] = n % 2;
        n /= 2;
    }

    while (k--)
        printf("%d", b[k]);

}

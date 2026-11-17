/*
Question 43: Check if a number is a strong number.
*/

#include <stdio.h>

int f(int n)
{
    int r = 1;
    for (int i = 2; i <= n; i++)
        r *= i;

    return r;
}

int main()
{
    int n;
    int t;
    int s = 0;
    scanf("%d", &n);
    for (t = n; t; t /= 10)
        s += f(t % 10);

    puts((s == n) ? ("Strong number") : ("Not strong number"));
}

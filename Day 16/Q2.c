/*
Question 32: Check if a number is a palindrome.
*/

#include <stdio.h>

int main()
{
    long long n;
    long long t;
    long long r = 0;
    scanf("%lld", &n);
    t = n;
    while (t)
    {
        r = (r * 10) + (t % 10);
        t /= 10;
    }

    puts((r == n) ? ("Palindrome") : ("Not palindrome"));
}

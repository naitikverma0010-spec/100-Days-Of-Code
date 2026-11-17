/*
Question 112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    long long cur = a[0];
    long long best = a[0];
    for (int i = 1; i < n; i++)
    {
        cur = ((cur + a[i]) > a[i]) ? (cur + a[i]) : (a[i]);
        if (cur > best)
            best = cur;
    }

    printf("%lld", best);
    return 0;
}

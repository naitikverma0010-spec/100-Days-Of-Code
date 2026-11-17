/*
Question 119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
        if (a[i] == a[j])
    {
        printf("%d", a[i]);
        return 0;
    }

    return 0;
}

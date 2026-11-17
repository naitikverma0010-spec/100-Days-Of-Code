/*
Question 116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. Find two distinct indices whose values sum to target. Print the two indices separated by a space; if none exists, print "-1 -1".
*/

#include <stdio.h>

int main(void)
{
    int n;
    int target;
    int a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        if ((a[i] + a[j]) == target)
    {
        printf("%d %d", i, j);
        return 0;
    }

    printf("-1 -1");
    return 0;
}

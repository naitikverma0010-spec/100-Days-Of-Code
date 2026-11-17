/*
Question 105: Find the majority element (> floor(n/2) occurrences), or -1.
*/

#include <stdio.h>

int main()
{
    int n;
    int a[1000];
    int cand = 0;
    int c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (c == 0)
            cand = a[i];
        c += (a[i] == cand) ? (1) : (-1);
    }

    c = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == cand)
        c++;

    printf("%d", (c > (n / 2)) ? (cand) : (-1));
}

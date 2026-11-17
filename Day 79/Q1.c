/*
Question 129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main(void)
{
    FILE *f = fopen("numbers.txt", "r");
    if (!f)
    {
        perror("numbers.txt");
        return 1;
    }
    long long sum = 0;
    int x;
    int n = 0;
    while (fscanf(f, "%d", &x) == 1)
    {
        sum += x;
        n++;
    }

    fclose(f);
    printf("Sum = %lld\nAverage = %.2f", sum, (n) ? (((double) sum) / n) : (0.0));
    return 0;
}

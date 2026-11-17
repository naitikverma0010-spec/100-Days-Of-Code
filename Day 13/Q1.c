/*
Question 25: Implement a basic calculator using switch-case for +, -, *, /, %.
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    char op;
    scanf("%d%d %c", &a, &b, &op);
    switch (op)
    {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            if (b)
            printf("%d", a / b);
        else
            puts("Division by zero");
            break;

        case '%':
            if (b)
            printf("%d", a % b);
        else
            puts("Division by zero");

    }

}

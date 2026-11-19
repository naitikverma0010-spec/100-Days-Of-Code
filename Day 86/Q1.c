/*
Q136. Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>
#include <string.h>

enum Choice { ADD, SUBTRACT, MULTIPLY };

int main() {
    char operation[20];
    int a, b;
    enum Choice choice;

    scanf("%19s %d %d", operation, &a, &b);

    if (strcmp(operation, "ADD") == 0)
        choice = ADD;
    else if (strcmp(operation, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch (choice) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }

    return 0;
}

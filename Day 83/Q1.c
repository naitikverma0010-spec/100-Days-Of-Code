/*
Q133. Create an enum for months and print how many days each month has.
*/

#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char input[10];
    const char *months[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int month = -1;

    scanf("%9s", input);

    for (int i = 0; i < 12; i++) {
        if (strcmp(input, months[i]) == 0) {
            month = i;
            break;
        }
    }

    if (month == FEB)
        printf("28 or 29 days\n");
    else if (month == APR || month == JUN || month == SEP || month == NOV)
        printf("30 days\n");
    else if (month >= JAN && month <= DEC)
        printf("31 days\n");
    else
        printf("Invalid month\n");

    return 0;
}

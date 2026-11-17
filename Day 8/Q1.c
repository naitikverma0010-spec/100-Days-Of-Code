/*
Question 15: Check whether a character is uppercase, lowercase, digit, or special character.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    scanf(" %c", &c);
    puts((isupper(c)) ? ("Uppercase alphabet") : ((islower(c)) ? ("Lowercase alphabet") : ((isdigit(c)) ? ("Digit") : ("Special character"))));
}

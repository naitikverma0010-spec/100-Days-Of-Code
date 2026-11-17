/*
Question 14: Write a program to input a character and check whether it is a vowel or consonant.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    scanf(" %c", &c);
    c = tolower(c);
    puts((((((c == 'a') || (c == 'e')) || (c == 'i')) || (c == 'o')) || (c == 'u')) ? ("Vowel") : ("Consonant"));
}

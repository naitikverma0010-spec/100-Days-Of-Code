/*
Q140. Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person person;
    char input[20];

    scanf("%19s", input);

    if (strcmp(input, "MALE") == 0)
        person.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        person.gender = FEMALE;
    else
        person.gender = OTHER;

    if (person.gender == MALE)
        printf("Male\n");
    else if (person.gender == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}

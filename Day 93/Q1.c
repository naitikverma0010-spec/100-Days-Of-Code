/*
Q143. Find and print the student with the highest marks.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];
    int top = 0;

    for (int i = 0; i < n; i++) {
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
        if (i > 0 && students[i].marks > students[top].marks)
            top = i;
    }

    printf("Topper: %s (Marks: %d)\n", students[top].name, students[top].marks);
    return 0;
}

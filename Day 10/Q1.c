/*
Question 19: Classify a triangle as Equilateral, Isosceles, or Scalene.
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d%d%d", &a, &b, &c);
    puts(((a == b) && (b == c)) ? ("Equilateral") : ((((a == b) || (b == c)) || (a == c)) ? ("Isosceles") : ("Scalene")));
}

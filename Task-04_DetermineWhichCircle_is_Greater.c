// Task 04: Determine Which Circle is Greater
// Write a function findArea that takes one integers as parameter and returns the area of circle. In main function take two radius as inputs and print the area of greater circle.

#include <stdio.h>

#define PI 3.1416

float findArea(int radius);

int main()
{
    int r1, r2;
    scanf("%d%d", &r1, &r2);

    findArea(r1) > findArea(r2) ? printf("Greater circle area: %.2f sq.unit\n", findArea(r1))
                                : printf("Greater circle area: %.2f sq.unit\n", findArea(r2)) ;

    return 0;
}

float findArea(int radius)
{
    return PI * radius * radius;
}
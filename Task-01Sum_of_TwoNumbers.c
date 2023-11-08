// Task 01: Sum of Two Numbers
// Write a function add that takes two integers as parameters and returns their sum.

#include <stdio.h>

int add(int x, int y);

int main()
{

    int num1, num2;
    scanf("%d%d", &num1, &num2);

    printf("Sum = %d\n", add(num1, num2));

    return 0;
}

int add(int x, int y)
{
    return (x + y);
}
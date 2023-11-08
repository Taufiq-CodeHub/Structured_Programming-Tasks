// Task 03: Check Even or Odd
// Write a function isEven that checks if a given integer is even. The function should return a 1 if the number is even and 0 if it's odd.

#include <stdio.h>

int isEven(int x);

int main()
{
    int number;
    scanf("%d", &number);

    printf("IsEven : %d\n", isEven(number));

    return 0;
}

int isEven(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

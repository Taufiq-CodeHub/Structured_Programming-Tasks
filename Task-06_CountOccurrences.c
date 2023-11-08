// Task 06: Count Occurrences
// Write a function named countOccurrences that counts how many times a given integer appears in an array of integers.

#include <stdio.h>

int countOccurrences(int array[] , int size, int number){

    int occur = 0;
    for(int i = 0; i < size; i++) if(number==array[i])occur++;

    return occur;
}

int main()
{
    int size, number; scanf("%d", &size);

    int arr[size]; for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Enter the number to count it's occurrences: ");
    scanf("%d", &number);

    printf("The number %d occurs %d times.", number, countOccurrences(arr, size, number));


    return 0;
}
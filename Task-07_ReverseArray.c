// Task 07: Reverse Array
// Define a function reverseArray that takes an array of integers and its size as arguments and reverses the array. The function doesn't need to return a value (it should alter the array in place and print them).

#include <stdio.h>

void reverseArray(int array[], int size)
{

    for (int i = 0; i < size/2 ; i++)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int size, number; scanf("%d", &size);

    int arr[size]; for(int i = 0; i < size; i++)scanf("%d", &arr[i]);

    reverseArray(arr, size);

    return 0;
}

// Task 05: Find Minimum and Maximum
// Create two functions: findMin and findMax. Each should take an array of integers and the array's size and return the minimum and maximum value, respectively.

#include <stdio.h>

int findMin(int array[], int size);
int findMax(int array[], int size);

int main()
{
    int size; scanf("%d", &size);

    int arr[size]; for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("The minimum element is %d\n", findMin(arr, size));
    printf("The maximum element is %d\n", findMax(arr, size));

    return 0;
}

int findMin(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; ++i)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

int findMax(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; ++i)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}
// Task 02:  Calculate Average
// Define a function calculateAverage that takes two floats as arguments and returns the average of these two numbers.

#include<stdio.h>

float calculateAverage( float x, float y);

int main()
{
    float f1, f2;
    scanf("%f %f", &f1, &f2);

    printf("Average = %.2f\n", calculateAverage(f1,f2) );

    return 0;
}

float calculateAverage( float x, float y){
    return (x + y)/2.0;
}
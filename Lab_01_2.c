// Write a program that asks the user to enter 5 integer numbers one by one.
// While reading the numbers, the program calculates the sum. At the end,
// the mean of all 5 numbers is printed with a precision of 2 digits after
// the decimal point. Try to limit the variables in your program to 2
// [or max 3] but do not introduce loops yet.

#include <stdio.h>

void main()
{
    // limit variables to two (2)
    int input;
    float sum = 0;
    
    // ask the user to enter 5 integers
    // manner: one by one
    
    // input 1
    printf("Please enter 1 of 5 integers: ");
    scanf("%d", &input);
        // compute the sum
        sum += input;
        
    // input 2
    printf("Please enter 2 of 5 integers: ");
    scanf("%d", &input);
        // compute the sum
        sum += input;
        
    // input 3
    printf("Please enter 3 of 5 integers: ");
    scanf("%d", &input);
        // compute the sum
        sum += input;
        
    // input 4
    printf("Please enter 4 of 5 integers: ");
    scanf("%d", &input);
        // compute the sum
        sum += input;
        
    // input 5
    printf("Please enter 5 of 5 integers: ");
    scanf("%d", &input);
        // compute the sum
        sum += input;
    
    // print the mean with a precision of 2 digits after the decimal point
    printf("The mean of all 5 numbers is %.2f", sum/5.0);
    
    
}
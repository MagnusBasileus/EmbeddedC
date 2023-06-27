// Write a program that asks a user to enter an integer number 
// with 3 digits and prints the number backwards.

#include <stdio.h>

void main()
{
    int input;
    
    // enter a 3-digit integer
    printf("Please input a three-digit integer: ");
    scanf("%d", &input);
    
    // print the number backwards
    printf("%d%d%d", input%10, input/10%10, input/100%10);
}
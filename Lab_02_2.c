// Write a program that reads a digit (0,1, ... , 9) and prints this digit
// as a word. If the entered number is not a digit, a warning should be printed.

// Assumptions:
// There is no restriction about the warning.
// To complete the execution of the program, the service must be complete.

#include <stdio.h>
#include <stdbool.h>

#define isDigit(x) ( (x) >=0 && (x) <=9 ) ? true : false

void main()
{
    int digit;
    bool digit_condition;
    
    do {
    
        // read a digit
        printf("Please enter a digit (0, 1, ... , 9): ");
        scanf("%d", &digit);
        
        digit_condition = isDigit(digit);
        if(digit_condition == false) {
            printf("Warning! Please enter a digit (0, 1, ... , 9).\n");
        }
    
    } while(digit_condition != true);
    
    // print the digit as a word
    switch(digit) {
        case 0:     printf("zero");  break;
        case 1:     printf("one");   break;
        case 2:     printf("two");   break;
        case 3:     printf("three"); break;
        case 4:     printf("four");  break;
        case 5:     printf("five");  break;
        case 6:     printf("six");   break;
        case 7:     printf("seven"); break;
        case 8:     printf("eight"); break;
        case 9:     printf("nine");  break;
    }
}
// Write a program that a function to check if a character is alphanumeric,
// that is lower case, upper case or numeric

#include <stdio.h>

void checkChar (char);

void main()
{
    char input;
    
    printf("Please input a character: ");
    scanf("%c", &input);
    checkChar(input);
    
}

// function checks a character
// lower case, upper case or numeric
// Assumption: Does not return a value
void checkChar (char c)
{
    if (c >= 'a' && c <= 'z') {
        printf("The character %c is in lower case.", c);
    } else if (c >= 'A' && c <= 'Z') {
        printf("The character %c is in upper case.", c);
    } else if (c >= '0' && c <= '9') {
        printf("The character %c is numeric.", c);
    } else {
        printf("The character %c is not alphanumeric.", c);
    }
}
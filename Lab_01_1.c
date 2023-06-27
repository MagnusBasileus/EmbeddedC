// Write a program that asks the user to enter hours, minutes, and seconds separately, and
// prints them in a sentence like:
// The entered time is: hh hours mm minutes and ss seconds
// where hh and mm can only be integer number. ss can have digits after the decimal point

#include <stdio.h>

void main()
{
    int hours, minutes;
    float seconds;
    
    // Task: ask user
    // manner: separately
    
        // enter hours
        printf("Please enter the number of hours: ");
        scanf("%d", &hours);
        
        // enter minutes
        printf("Please enter the number of minutes: ");
        scanf("%d", &minutes);
        
        // enter seconds
        printf("Please enter the number of seconds: ");
        scanf("%f", &seconds);
        
    // print in a sentence
    printf("The entered time is: %d hours %d minutes and %.1f seconds", hours, minutes, seconds );
    
}

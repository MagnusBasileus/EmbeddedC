// Write a program that asks the user to enter a real number and
// prints whether for that number, each one of the following
// conditions are met or not:
// condition A: 3 <= x < 8.5
// condition B: x < 3 OR 5.4 < x <= 7.3 OR x > 13
// condition C: x != 3 AND x < 9.75

#include <stdio.h>

void main()
{
    float x;
    
    // ask the user to enter a real number
    printf("Please enter a real number: ");
    scanf("%f", &x);
    
    // print condition matching results
    printf("Matches conditions:");
    
    // condition A: 3 <= x < 8.5
    if(x >= 3 && x < 8.5) {
        printf(" A,");
    } else {
        printf(" not A,");
    }
    
    // condition B: x < 3 OR 5.4 < x <= 7.3 OR x > 13
    if(x < 3 || (x > 5.4 && x <= 7.3) || x > 13) {
        printf(" B,");
    } else {
        printf(" not B,");
    }
    
    // condition C: x != 3 AND x < 9.75
    if(x != 3 && x < 9.75) {
        printf(" C");
    } else {
        printf(" not C");
    }
    
}
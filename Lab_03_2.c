// Write a program to compute the area and perimeter of a rectangle
// with a width of 3 inches and a height of 5 inches.

// What changes must be made to the program so that it works for a
// rectangle with a width of 6.8 inches and a length of 2.3 inches?
// >> To have the flexibility of varying types written on reusable code
//    we can use properly defined macros instead of functions.

// Assumtion: height and length refers to the same measure

#include <stdio.h>

#define computeArea( w, h ) ( (w) * (h) )
#define computePerimeter( w, l ) ( 2 * (w) * (l) )

void main()
{
    printf("3 x 5 rectangle");
    printf("\nArea of the rectangle: %d", computeArea(3,5));
    printf("\nPerimeter of the rectangle: %d", computePerimeter(3,5));
    
    printf("\n\n6.8 x 2.3 rectangle");
    printf("\nArea of the rectangle: %f", computeArea(6.8,2.3));
    printf("\nPerimeter of the rectangle: %f", computePerimeter(6.8,2.3));
}
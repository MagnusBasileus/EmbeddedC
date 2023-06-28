// Since a year is not exactly 365 days, we have a leap year once every 4 years
// except if the year is dividable by 100. If the year is dividable by 400, the
// year is considered a leap year anyway.

#include <stdio.h>

int isLeapYear(int year);
int numberOfDays(int month, int year);

// Write a main function that reads a month and a year and prints the number of days in that
// month of that year.
void main()
{
    int month, year;
    
    // read month and year
    printf("Please input month and year: ");
    scanf("%d %d", &month, &year);
    
    printf("month %d of year %d has %d days", month, year, numberOfDays(month, year));
    
}

// determine if a year is a leap year or not and gives a different function return value
// for both cases.
int isLeapYear(int year)
{
    if( year % 4 == 0 && year % 100 != 0) {
        return 1;
    } else if (year %4 == 0 & year % 100 == 0 & year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

// calculate the number of days in the month month of the year given
int numberOfDays(int month, int year)
{
    int retval;
        enum days { 
            JANUARY = 31,
            FEBRUARY = 28, 
            FEBRUARY_LEAP = 29,
            MARCH = 31,
            APRIL = 30,
            MAY = 31,
            JUNE = 30,
            JULY = 31,
            AUGUST = 31,
            SEPTEMBER = 30,
            OCTOBER = 31,
            NOVEMBER = 30,
            DECEMBER = 31
        };
        
        switch (month){
            case 1: retval = JANUARY; break;
            case 2: 
                if(isLeapYear(year) == 1){
                    retval = FEBRUARY_LEAP;
                } else {
                    retval = FEBRUARY;
                }
                break;
            case 3: retval = MARCH; break;
            case 4: retval = APRIL; break;
            case 5: retval = MAY; break;
            case 6: retval = JUNE; break;
            case 7: retval = JULY; break;
            case 8: retval = AUGUST; break;
            case 9: retval = SEPTEMBER; break;
            case 10: retval = OCTOBER; break;
            case 11: retval = NOVEMBER; break;
            case 12: retval = DECEMBER; break;
            default:
                printf("Invalid month input.\n");
        }
        
    return retval;
}




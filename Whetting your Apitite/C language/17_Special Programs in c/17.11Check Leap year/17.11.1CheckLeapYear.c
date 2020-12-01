/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
#include <math.h>
/***************                        Leap year                 ***************/

/***************                     Write a Program
 * that check that year is leap year or not.                ***************/

/***************                      Basic:
 * What is leap year?
 * Leap year is a year having 366 days.The extra day is the 29th Febrary.
 * Leap year arrive after every four years.
 * IMPORTANT: Every year that is exactly divisible by 4 is a leap year, Except the centurial
 * years that is exactly divisible by 100. But these centurial years are leap years if they are
 * exactly divisible by 400.
 * How to check a year is leap year or not ?
 * These are some condition on basis we can check that year is leap or not ?
 * 1_If a year is divisible by 400 then it is leap year.
 * For Example: 2000 is divisible by 400, Therefore it is leap year.
 * 2_If a year is not divisible by 400 but divisible by 100 then it is not a leap year.
 * For Example: 1900 is not divisible by 400, But it is divisible by 100, Therefore it is not a leap year.
 * 3_If a year is not divisible by 400 and not divisible by 100 but it is divisible by 4
 * then it is leap year. 
 * For Example: 2012 is not divisible by 400, and not divisible by 100, But it is divisible by 4. Therefore
 * it is a leap year.               ***************/
int main(){
    int year;
    do{
        printf("Please! Enter the year you want to check leap year or not or zero to go out of program: ");
        scanf("%d", &year);
        int decimal = 0, rem, num, base = 1;
    /***************                     To come out from loop.Finished the program                 ***************/
        if(year == 0){
            break;
        }
        else{
    /***************                  Run while loop to convert binery number to decimal number.       ***************/
            if(year % 400 == 0){
                printf("%d is a leap year \n", year);
            }
            else if(year % 100 == 0){
                printf("%d is not a leap year \n", year);
            }
            else if(year % 4 == 0){
                printf("%d is a leap year \n", year);
            }
            else{
                printf("%d is not a leap year \n", year);
            }
            }
        }while(1);
    printf("Opoose! You are out of program now!");

    return 0;
}

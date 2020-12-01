/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
#include <math.h>
/***************                     Binery to Decimal Conversion                 ***************/

/***************                     Write a Program
 * that convert Binery values to decimal values.                ***************/

/***************                      Basic:
 * let suppose we have binery number: 1001 we want to convert it to decimal value.
 * To convert a binery number to a decimal number.
 * we have to multiply each bit to its corresponding weight and then add them together to obtain decimal number.
 * As we know weight of last 1 is 2^0,and of previous 0 is 2^1, and of previous 0 is 2^2 and first one is 2^3.
 * Next step is multiply each digit with its corresponding weight and add them together as below.
 * 2^3 * 1 + 2^2 * 0 + 2^1 * 0 + 2 ^0 *1 =  8 + 0 + 0 + 1. So the decimal value is 9.         ***************/
int main(){

    int binery;

    do{
    /***************       Here we are asking from user to input binery number that he/she
     * want to convert binery number to decimal number.               ***************/
        printf("Please! Enter Binery number to convert decimal number or zero to go out of program: ");
        scanf("%d", &binery);
        int decimal = 0, rem, num, base = 1;
    /***************                     To come out from loop.Finished the program                 ***************/
        if(binery == 0){
            break;
        }
        else{
    /***************                  Run while loop to convert binery number to decimal number.       ***************/
            num = binery;
            while(binery != 0){
    /***************                  Here we are dividing binery number with 10 and store reminder
     * in rem variable.The purpose of this to obtain last bit of binery number and multiply it by its
     * corresponding weight.       ***************/
                rem = binery % 10;
                decimal = decimal + rem*base;
        /***************                  Here we are again dividing binery number with 10 and store
     * Store quotant in binery variable.The purpose of this to obtain remained bit after excluding
     * last bit of binery number.For more processing.
     * base multiply by 2 to increment corresponding weight of every next bit of binery number.       ***************/
                binery = binery/10;
                base = base*2;
            }
            printf("Decimal equivalent of the binery number %d is: %d \n", num, decimal);
        }
    }while(1);
    printf("Opoose! You are out of program now!");

    return 0;
}

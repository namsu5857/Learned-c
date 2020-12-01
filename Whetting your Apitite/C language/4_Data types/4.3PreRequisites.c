/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.4                   ***************/



/***************                    Data Types                     ***************/
#include <stdio.h>

int main(){

    /***************                Range 
     * Upper and lower limit of some set of data
     * For Examle  {0, 1, 2, 3, 4}
     * Range of above set is: 0 to 4                         ***************/
    /***************                Wanna know size Programmatically
     * You can know by using sizeof(int); operator
     * Note: sizeof() is a unary operator and not a function and is used to
     * determine then size of any data type!                     ***************/
    printf("%d \n", sizeof(int));

    /***************                Decimal Number system
     * Human understandable number system.
     * also called as base 10  Number system.  
     * Range 0 to 9   
     * for Example if we write 568
     * it means 5 Hundered and sixty Eight 
     * But Actually(Base 10) write it as.
     * 5*10^2 + 6*10^1 + 8*10^0 => 500 + 60 +8 = 568
     * It is easy but it can only human understand not Mechine                ***************/

    /***************                Binery Number System
     * Mechine Understandable Number System Also called as base 2 Number system.
     * Range 0 to 1
     * for Example 1101
     * 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 => 8 + 4 + 0 + 1 = 13                     ***************/

    /***************                 Range of 4 Bit data
     * 4 bit      0 0 0 0   Minimum Value = 0
     * and        1 1 1 1   Maximum Value = 15
     * Range of 4 Bit Data is 0 to 15
     * To calculate Range of Bit There is Formula 2^n - 1                     ***************/
    return 0;
}
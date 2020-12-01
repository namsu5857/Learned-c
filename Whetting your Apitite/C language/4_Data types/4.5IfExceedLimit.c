/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.4                   ***************/



/***************                    Data Types                     ***************/
#include <stdio.h>

int main(){
    /***************                    What if i exceed the limit of data type
     * Unsigned Integer
     * for 32 bit unsigned data -> Mod2^32
     * for n bit unsigned data -> Mod 2^n
     * if you exceed one number it will return 0
     * if you exceed two number it will return 1
     * and so on.It behave like Clock or MOD Function 
     * When it 13 o clock its not 13 its 1 and same
     * 14 to 2 and 15 to 3 and sooo oon                  ***************/
    unsigned int var = 4294967295; //This is maximum allowable limit of unsigned int
    printf("%u \n", var);
    //unsigned int var1 = 4294967296; //This is one more than mximum allowable limit of unsigned int
    //printf("%u", var1);
    /***************                    Signed Integer
     * if we try to exceed limit of signed int 2147483647 by one
     * as 2147483648 it will return -2147483648 that mean in negtive
     * last number  as shown below!                 ***************/
    int var3 = 2147483648;
    printf("%d", var3);

    return 0;
}
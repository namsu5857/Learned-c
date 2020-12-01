/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/




/***************                    Problem #1 related to Operators               ***************/
#include <stdio.h>

int main(){

    /***************               What is C standered 
     * C standered is the language specification which is adopted by all compiler across the globe.
     * According to C99 Standered:C99 is older version of C standered adopted 1999. C11 is the latest
     * revised version of C standered adopted in 2011.
     * The sizeof Operator yields the size (in bytes) of its operand, which may be an expression or
     * a prenthesized name of a type.The size determind from the type of the operand. If the type of
     * the operand is a variable length array type, then the operand is not evaluated and the result 
     * is an integer constant.
     *   ***************/

    /***************   So Acording to the above discussion i++ inside sizeof is not evaluated!      ***************/

    /***************                    What will be output of this Problem  
     * So Output of this program will be 5 4            ***************/
    int i = 5;
    int var = sizeof(i++);

    printf("%d %d \n", i, var);
    return 0;
}
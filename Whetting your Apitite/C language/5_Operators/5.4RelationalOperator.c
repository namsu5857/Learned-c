/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/



#include <stdio.h>

int main(){
    /***************         Relational Operators are Those
     * Who used in comparing two values.OR you can say find relation between two operands.
     * Relational Operators are also called binery Operators means required two operands 
     * for operations.
     * All relational operators return TRUE or FALSE.For Example
     * 4 == 5 means is 4 == 5 or not ?
     * If equal it will return TRUE else FALSE.
     * As we know 4 is not equal to 5 So it will return FALSE.       ***************/

    /***************             Relational Operators
     * These are some Relational Operators
     * 1_Equal to Operator(==).
     * 2_Not Equal to Operator(!=).
     * 3_Less than or equal to Operator(<=).
     * 4_Greater than or equal to Operator(>=).
     * 5_Less than Operator(<).
     * 6_Greater than Operator(>).             ***************/
    int a = 309, b = 2090;
    if(b >= a){
        printf("Bingo! You are in...");
    }else{
        printf("Oops! You are out...");
    }
    return 0;
}
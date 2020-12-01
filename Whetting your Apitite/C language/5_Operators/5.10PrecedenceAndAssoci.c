/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/




/***************                    Precedence and Associativity of Operators               ***************/
#include <stdio.h>

int main(){

    /***************              Precedence of Operator
     * Precedence of Operators come into picture when in an expression we need to decide which
     * Operator will be evaluated first.Operator with heigher precedence will be evaluated first.
     * 
     *                             Associativity of Operator
     * Associativity of Operators come into picture when perecedence of Operators are same and we need
     * to decide which Operator will be evaluated first.Associativity can be either 
     * 1_Left to Right
     * 2_Right to Left   ***************/

    /***************                  To See the Table of Precedence and Associativity of Operators 
     * Click this link: https://www.programiz.com/c-programming/precedence-associativity-operators              ***************/


    /***************                Important Facts
     * 1_Assiciativity can only help if there are two or more operators of same perecedence
     * and not when there is just one operator.
     * 2_Operator with same perecedence have same associativity as well.               ***************/

    /***************                    Home Work Problem              ***************/
    int a =10, b = 20, c = 30, d = 40;
    if (a <= b == d > c){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
    return 0;
}
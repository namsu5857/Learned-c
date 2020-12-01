/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/




/***************                    Comma Operator               ***************/
#include <stdio.h>

int main(){

    /***************              Comma Operator
     * Comma is used as separator.
     * for example.
     * int a = 4, b = 3, c = 8; This is nothing but multiple definition of variable in single line.
     * Comma we can also use as Operator. For Example.    ***************/
    int a = (3, 4, 8);
    printf("%d \n", a);
    /***************                    Comma Operator returns the right most operand in 
     * the expression and it simply evaluates the rest of operands and finally reject them.
     * So output of above program will be 8.   
     * Let see what is output of this program.
     * "it simply evaluates the rest of operands and finally reject them"           ***************/
    int var = (printf("%s \n", "Wow Its Amazing!"), 5);
    /***************                    Comma Operator  will not simply rejected it.First evaluated
     * and then rejectd.5 will be returned to var after evaluating the first operand
     * So Output of this program will be.
     * Wow Its Amazing!
     * 5              ***************/
    printf("%d \n", var);

    /***************                    Comma Operator is having least perecedence among
     * all the operators available in C language.
     * Bracket has the heighest precedence than anyother operation              ***************/

    /***************                    Home Work Problem               ***************/
    int var1;
    int num;

    num = (var1 = 15, var1 + 35);
    printf("%d \n", num);
    return 0;
}
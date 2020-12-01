/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/




/***************                    Conditional Operator               ***************/
#include <stdio.h>

int main(){

    /***************              Conditional Operator
     * It is ternary operator.So it required three operands.
     *  Look and Feel      ? : 
     * why we required coditional operator ?
     * let see with example. below!    ***************/


    /***************    
     * char result;
     * int marks;
     * if(marks > 33){
     *     result = 'P';
     * } 
     * else{
     *     result = 'f';
     * }          
     * This above whole code we can write as with help of conditional operator in single line.   ***************/
    char result;
    int marks;
    result = (marks > 33) ? 'P' : 'F';
    
    /***************     result = (marks > 33) ? 'P' : 'F';
     * In above "marks > 33"  is boolean expression, therefore it will return either TRUE
     * or FALSE.If it return TRUE then "P" will print and if return FALSE then "F" will Print.
     * (marks > 33) ? 'P' : 'F'; is a conditional expression, which is after all an expression, 
     * Therefore it is R-value and result is L-value.               ***************/


    /***************             Quick Facts About Conditional Operator   
     * 1_Conditional Operator is the only ternary operator available in the list of operators
     * in C language.
     * 2_As in "Expression1 ? Expression2 : Expression3", Expression1 is boolean expression. If 
     * we simply write "0"(Zero) instead of some boolean expression than that simply means FALSE
     * and therefore Expression3 will get evaluated. 
     * let see below an example!           ***************/
    int result1;
    result1 = 0 ? 2 : 1;
    printf("%d \n", result1);
    /***************                   Home work problem              ***************/
    int var = 75;
    int var2 =56;
    int num;
    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;

    printf("%d \n", num);
    return 0;
}
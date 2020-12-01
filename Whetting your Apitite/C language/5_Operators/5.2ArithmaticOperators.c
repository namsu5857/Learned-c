/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/



#include <stdio.h>

int main(){
    /***************              Arithmatic Operators
     * These operators are used for arithmatic operations.
     * These are arithmatic operators!
     * 1_Addition (+).
     * 2_Subtraction(-).
     * 3_Multiplication(*).
     * 4_Division(/).
     * 5_Modulus(%).              ***************/
    /***************             These are all called binery operators
     * It means two operands are required to perform operation.
     * for example if you want to add to numbers you required two numbers
     * as 4 + 3 Here 4 is one operand and 3 is other operand
     * same for all required two operand for operations.               ***************/
    int a,b;
    printf("Please Enter first Number: \n");
    scanf("%d", &a);
    printf("Please Enter Second Number: \n");
    scanf("%d", &b);

    printf("a + b = %d \n",a+b);
    printf("a - b = %d \n",a-b);
    printf("a * b = %d \n",a*b);
    printf("a / b = %d \n",a/b);
    printf("a %% b = %d \n",a%b);
    /***************             Another Arithmatic Programming Example 
     * i used %% operator at line 39
     * because if i write one compiler will consider it as format specifier
     * if you want to print it you have to write two % sign              ***************/  
    int c = 5, d = 10, e = 15, f = 20;
    printf("c * d/e = %d \n", c * d/e);
    printf("c + d - e = %d \n", c + d - e);
    printf("c + d * f - e %% c = %d \n", c + d *f - e%c);

    /***************     To read about precedence and associativity
     * of operators check 5.9PrecedenceAndAssociativity.c               ***************/

    return 0;
}
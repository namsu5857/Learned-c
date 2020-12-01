/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/




/***************                    Logical Operators               ***************/
#include <stdio.h>

int main(){

    /***************              Logical Operators
     * These are some Logical Operators
     * 1_And Operator(&&).
     * && return TRUE when all the conditions under consideration are true and return FALSE
     * when anyone or more than one condition is false as shown in example at below!
     * for example 
     * 2_OR Operator(||).
     * || return TRUE when one or more than one condition under consideration is true and return
     * FALSE when all conditions are false.as shown below!
     * 3_NOT Operator(!). 
     * ! operator is used to complement the condition under consideration.
     * ! return TRUE when condition is FALSE and return FALSE when condition is TRUE.  
     * As shown example below!      ***************/

     /***************              Logical Operators
     * && and || are used to combine two conditions       ***************/


    int a = 5;
    if(a == 5 && a != 6 && a <= 56 && a > 4){
        printf("Wellcome to this beatifull world of Introduction to Operators! \n");
        /***************        As you can see here if all condition will true then
         * it will return "Wellcome to this beatifull world of Introduction to Operators!" 
         * if any condition is false or all condition is false then only execute
         * else part and it will return "Continue your learning....".           ***************/
    }
    else{
        printf("Continue your learning....");
    }

    int b = 5;
    if(b != 5 || b == 6 || b >= 56 || b > 4){
        printf("Wellcome to this beatifull world of Introduction to Operators! \n");
        /***************        As you can see here if any one condition will true then
         * it will return "Wellcome to this beatifull world of Introduction to Operators!" 
         * if all condition is false only then execute else part and it will return 
         * "Continue your learning....".           ***************/
    }
    else{
        printf("Continue your learning....");
    }


    int c = 5;
    if(!(c == 6)){
        printf("Wellcome to this beatifull world of Introduction to Operators! \n");
        /***************        As you can see here if c is not equal to 6 then condition will true then
         * it will return "Wellcome to this beatifull world of Introduction to Operators!" 
         * if c is equal to 6 then condition is false only then execute else part and it will return 
         * "Continue your learning....".           ***************/
    }
    else{
        printf("Continue your learning....");
    }
    return 0;
}
/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.7                   ***************/
/***************                        Loops                       ***************/



/***************          Introduction To Loops                     ***************/
#include <stdio.h>

int main(){
    /***************                   do while loop 
     * Syntax of do-while loop.
     * initialization;
     * do{
     *     Statements;
     * }while(Expression);                ***************/


    /***************          Difference between while Loop and do-while loop
     * while loop:
     * int i = 0;
     * while(i > 0){
     *     printf("%d \n", i);
     *     i--;
     * } 
     * In above first of all i initialize a variable "i" and assign it value zero(0),
     * Then start while loop.In while loop first check condition "i > 0",As we know that 
     * i is not greater than zero(0).So condition is FALSE and further no loop will execute
     * and output will be.
     * Not output.
     * do-while loop:
     * int i = 0;
     * do{
     *     printf("%d \n", i);
     *     i--;
     * }while(i > 0); 
     * In do-while loop i also initialize a variable "i" and assign it value "0". in do i wrriten
     * some body of loop and in while checking condition.
     * In do-while loop first we are executing body of loop and then checking condition.So first value
     * of "i" will print and then decrement will happen, after this condition will checked.while(i > 0)
     * As here value of i is -1,-1 is not greater than 0 So condition is FALSE and output will be
     * 0
     * The above discussion show that same program for both loop but difference in output.
     * Important Note: In while loop after while(i > 0) there is no semicolon.
     * But in do-while loop after while(i > 0); there is semicolon.If you do not put semicolon it will 
     * generate error.                  ***************/


    int i = 0;
    do{
        printf("%d \n", i);
        i--;
    }while(i > 0); 

    /***************          When should i prefer do-while Loop over while
     * Write a program which allows user to enter an integer untill he/she enters a value zero.
     * For this i write two different programs as below!                     ***************/
    /***************          1st Loop with the help of while loop 
     * Here we have to write printf and scanf functions calling two time(Repeatition of same code)                    ***************/
    int n;
    printf("Enter an integer: \n");
    scanf("%d", &n);

    while(n != 0){
        printf("Enter an integer: \n");
        scanf("%d", &n);   
    }
    printf("You are out of loop!");
    /***************          Second Loop with the help of do-while loop 
     * But here is no rewrite.
     * So you can understand it when you should prefer do-while loop over while loop.
     * If you have to execute body of loop one time before checking condition.Then you prefer
     * do-while loop.if you have to check condition first and then execute body of loop then you
     * prefer the while loop over do-while loop.                    ***************/
    int var;
    do{
        printf("Enter an integer: \n");
        scanf("%d", &var);
    }while(var != 0);
    return 0;
}
/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.7                   ***************/
/***************                        Loops                       ***************/



/***************          Introduction To Loops         ***************/
#include <stdio.h>

int main(){
    /***************                   for loop 
     * Syntax of for loop.
     * for(initialization; condition; increment/decrement){
     *     Statements;
     * }  
     * if you want to understand how for loop works.First of all you have to understand how
     * while loop works.
     * In while loop.first of all "initialization" step in for loop also first of all initialization
     * step.Second step is to check condition in while loop.In for loop also second step is to check 
     * condition if condition is satisfied then statements of loop will evaluated otherwise loop will
     * finish.if condition is satisfied then statemets of while loop will execute same for for loop.
     * After execution of statement increment/decrement will happen in while loop also in for loop
     * same.After then again condition will check and it will continue process untill condition is get
     * FALSE and loop will finished in both(While and for).But difference in both is lines of codes.
     * In while loop required more line of code than for loop.It is your personel choice which loop
     * you will choose for your program...                  ***************/
    int j;
    for(j = 3; j > 0; j--){
        printf("%d \n", j);
    }

    /***************                    while loop  
     * Syntax of while loop
     * while(Expression){
     *     statement1
     *     statement2
     *     .
     *     .
     *     .
     * }    
     * if expression is TRUE then statements will be evaluated,then it again check condition if 
     * return TRUE again statements will be evaluated, It will continue untill condition(Expression) 
     * get FALSE.
     * Example is given below!                ***************/
    int i = 3;
    while(i > 0){
        printf("%d \n", i);
        i--;
    }
    return 0;
}
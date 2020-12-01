/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.8.8                  ***************/
/***************                      Recursion                     ***************/



/***************               Introduction To Recursion         ***************/
/***************                Definition of Recursion:
 * Recursion is a process in which a function calls itself directly or indirectly.
 * for example...
 * int fun(){
 *     ...
 *     fun();
 * }               ***************/
#include <stdio.h>

/***************        Explaination of Recursion:
 * As any function is execute its activation record is maintain in stack.
 * As we know that a program is always start from main function.So Activation record of main is
 * maintained first in stack.Activation record is consist of local variable, parameters and return address.
 * As here we are only maintained local variable(int n = 3) in activation record.After this there is printf
 * function.In printf function we are calling function fun.
 * In fun function we are passing value of n(that is declared in main function).The caller of fun function is
 * main function.Now control will be transfer from main to fun.
 * Now fun function activation record will maintained inside stack.As we know the value of n is 3 so in stack
 * n = 3 will be maintained.
 * Now in fun function first of all condition will checked if(n == 1) as n = 3 so condition is false.else part will
 * evaluate.In else part there is only one statement. return 1 + fun(n-1). This is clearly show recursion.Means fun
 * is calling itself.As n = 3 so in else part this will replace with 3 - 1 that is 2. Now again fun function will call
 * and Now control will transfer from fun(3) to fun(2).Now again activation record of fun(2) will be maintained inside
 * stack. Again we will repeat above process to check condition of if that will return false and else part will execute
 * and now fun(1) will call.Now control will be transfer from fun(2) to fun(1) and activation record of fun(1) will be
 * maintained inside stack.As Now if condition will evaluate(Because it will return TRUE).Now fun(1) will return back 1
 * to its caller(that is fun(2) and fun(1) is callee).Return back simply means to pop out from stack.All activation 
 * record of fun(1) will destroy from stack.And control is transfer back to fun(2).            ***************/
int fun(int n){
    if(n == 1)
        return 1;
    else{
        return 1 + fun(n - 1);
    }
}


int main(){
    int n = 3;
    printf("%d", fun(n));



 

    return 0;
}
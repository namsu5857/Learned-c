/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************  Introduction To Static and dynamic scoping of Functions   ***************/
#include <stdio.h>
int fun(int, int); //Declaration of function fun;
int main(){  
    /***************              Preliminaries:
     * To understand static and dynamic scoping of functions first of all you have to understand
     * memory layout of c program: For this purpose check this link:https://www.geeksforgeeks.org/memory-layout-of-c-program/
     * In memory layout here we have to consider only stack memory segment.
     * Stack is a container(or memory segment) which holds some data.
     * Data is retrieved in Last in First out(LIFO) fashion.
     * Two operations we can performed on stack: push and pop.
     * Push means you are placing element in stack.
     * pop means you are retrieving the element from stack. 
     * In stack(Call Stack) activation record is save not whole function.
     * NOTE:Activation Record:
     * is a portion of a stack which is generally composed of:
     * 1_Local of callee
     * 2_Return address to the caller.
     * 3_Parameters of the callee.
     * IMPORTANT: Activation Record hold another data also but in this course we required only this.Other data is out
     * of scope and will be teach in Compiler design course.                ***************/

    /***************               Why Scoping:
     * Scoping is necessary if you want to reuse variable names(You can declare same name variables in two 
     * or more different functions).        ***************/

    return 0;
}
/***************                   IMPORTANT: Take aways
 * 1_Most of programming languages static scoping is followed instead of dynamic scoping.
 * 2_Languages, including Algol, pascal, C, Haskell, Scheme etc. are statically scoped.
 * 3_Some languages, including SNOBOL, APL, Lisp etc. are dynamically scoped.
 * 4_As C follow static scoping therefore it is not possible to see programmatically, How dynamic 
 * scoping works in c.
 * 5_perl is a programming language which supports both static as well as dynamic scoping.    ***************/


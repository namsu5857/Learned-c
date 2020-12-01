/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************                      Problem: 5                    ***************/
/***************        Problem related To Static and Dynamic Scoping 
 * Consider the program below in a hypothetical programming language which allow global variables
 * and a choice of static or dynamic scoping.      ***************/

/***************        let x be the value printed under static scoping and
 * y be the value printed under dynamic scoping then what will be the value 
 * of x and y.    ***************/
#include <stdio.h>
int i;
int f(){
    int i = 20;
    g();
}
int g(){
    printf("%d", i);
}

int main(){
    i = 10;
    f();
    
    return 0;
}
/***************                   Solution for x:
 * First we see value of x.
 * As x is global variable.In main function we are updating value of x = 10.Then call f() function.In f() function
 * declare another x variable that is local(as function will complete it will destroy).Then call function g().In 
 * g() function we are printing value of x.
 * Through static scoping x is not in function g().But already x value updated through main function.So global x value
 * will be print on screen that is 10.         ***************/

/***************                   Solution for y:
 * Now we see value of y.
 * As y is global variable.In main function we are updating value of y = 10.Then call f() function.In f() function
 * declare another y variable that is local(as function will complete it will destroy).Then call function g().In 
 * g() function we are printing value of y.
 * Through dynamic scoping y is not in function g().Now y will be searched in its(g()) calling function f().As in f()
 * function y = 20 so 20 will print on screen.        ***************/
   
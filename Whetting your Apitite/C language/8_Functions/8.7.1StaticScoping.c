/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************  Introduction To Static and dynamic scoping of Functions   ***************/
#include <stdio.h>
int fun1(int);
int fun2(int);
int a = 5;
int main(){  
    /***************              Static Scoping:
     * In static scoping(or lexical scoping), definition of a variable is resolved by searching its containing 
     * block or function,if that fails then searching the outer containing block and so on.
     * IMPORTANT: C program is use always static scoping and compiler prefer the nearest variable(of same name).
     *               ***************/


    /***************               For Example:
     * In below we are trying to understand the static scoping.
     * In this program we have three functions 
     * 1_ main function
     * 2_ fun1 function
     * 3_ fun2 function
     * In main function we have variable a = 10, and calling fun1 and passing it a variable as parameter.
     * and return value from fun1 is assign to a and through printf function print value of a.   ***************/
    
    int a = 10;
    a = fun1(a);
    printf("%d", a);
    return 0;
}
/***************  In fun1 function we declare a new variable b and add 10 in b.
 * As we know in fun1 we are passing a as parameter and value of a is 10(compiler will prefer nearest variable)
 * So b = 20.
 * On next line we call another function fun2 and passing it value of b variable as parameter.   ***************/
int fun1(int b){
    b = b + 10;
    b = fun2(b);
    return b;
}
/***************  In fun2 function we declare a new variable b and c and add a, b and assign them to c also return c.
 * As we know in fun1 b = 20 and through static scoping a = 5 so c will be 25.25 will be return to back fun1 and from
 * fun1 25 will return to back main function so a = 25 finally through printf function 25 will print as output on screen
 * So b = 20.
 * On next line we call another function fun2 and passing it value of b variable as parameter.   ***************/
int fun2(int b){
    int c;
    c = a + b;
    return c;
}


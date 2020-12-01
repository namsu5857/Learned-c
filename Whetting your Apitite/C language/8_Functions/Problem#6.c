/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************                      Problem: 6                    ***************/
/***************        Problem related To Static and Dynamic Scoping 
 * what will be output of the following program, when parameters are passed by reference and dynamic
 * scoping is assumed ?     ***************/

#include <stdio.h>
int a = 3;
void n(x){
    x = x * a;
    printf("%d", x);
}
void m(y){
    a = 1;
    a = y - a; 
    n(a);
    printf("%d", a);
}

int main(){
    m(a);
    
    return 0;
}
/***************                   Solution:
 * a variable is declared as global variable and always c program start from main.So
 * in main function we are calling function m() and passing it address of a as mentioned in above 
 * question(parameters are passed by reference).
 * In m() function y is pointer(That recieved address of a).We have another variable a in m() function
 * that is a = 1.On next line we are updating value of a by evaluate the expression.As y = 3 and a = 1
 * So y - a means 3 - 1 => 2 Now a contain value 2.Next we are calling function n(a) and passing it address
 * of a.In n() function we have a pointer x(that hold address of a).In n() function x = x * a.Here value of x
 * is 2 and a value also 2(It will searched by dynamic scoping) so x = 2*2 => 4.
 * Finally 4 will print on screen.
 * Now n() function execution will be finished and control will transfer again to m() function.In m() function
 * value of a will print.as parameter are passed by reference so a is contain value 4.
 * finally 4 4 will print on screen.       ***************/
   
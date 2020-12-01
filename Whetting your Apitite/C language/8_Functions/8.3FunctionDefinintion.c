/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************               Introduction To Functions         ***************/
#include <stdio.h>
/***************               Don't forget to mention the prototype of a function. Before calling it.
 * Recall: There is no need to mention name of the parameters.         ***************/
int add(int, int); //Function prototype.
int main(){
    
    /***************                   Functions Definition in c:
     * What is Function definition ?
     * function definition consists of block of code which is capable of performing some specific task.
     * For Example:
     * int add(int a, int b){
     *     int sum;
     *     sum = a + b;
     *     return sum;
     * }
     * The block between these two curly braces{} is capable to performing some specific task means can 
     * perform addition on two numbers a and b;
     * This whole is called definition of function.            ***************/


    /***************              Let's try to understand: How function works ?
     * Don't forget to mention the prototype of a function. Before calling it.Otherwise it will produce error.
     * Recall: There is no need to mention name of the parameters while declaring of function.
     * After this in main function we have 3 variables: var1, var2, a.var1 contains value 20 and var2 contain value
     * 30, a is not contain any value.What will be the result will be store inside a variable.
     * Next line we have int "a = add(var1, var2);" add(var1, var2) This is way you call a function. 
     * NOTE: While calling a function, You should not mention the return type of the function.Also you should not
     * mention the data types of the arguments.
     * when we calling a function control of compiler will transfer from calling function line toward function definition
     * means where function is defined.
     * int add(int a, int b){
     *     return (a + b);
     * } 
     * This actual way of defining a function.
     * NOTE: It is important to mention both data type and name of parameters.
     * As above we are calling function add,we are passing values of variable var1, var2 to variables in add function
     * definition int a and int b. value of var1(20) is passing to variable a and value of var2(30) is passing to variable b
     * Therefore a will contain now 20 and b will contain 30.In add function we are add values of these variables
     * as a + b => 20 + 30 = 50. Finally this 50 will return back to calling procedure(int a = add(var1, var2);). 
     * and function will replace by 50 as a = 50; Now a variable is contain value 50.After that we simply print value
     * of a by printf function.So out put of this program is 
     * 50
     * This is how a function works.    ***************/
    int var1 = 20, var2 = 30;
    int a = add(var1, var2);
    printf("The addition of two number is :%d", a);

    return 0;
}
/***************                   Actual definition Function: add         ***************/
int add(int a, int b){
    return (a + b);
}
/***************                   What is defference between an argument and a parameter
 * Parameter:
 * Parameter is variable in the declaration and definition of the function.
 * Argument:
 * Argument is actual value of the parameter that gets passed to the function.
 * NOTE: Parameter is also called as formal parameter and argument is also called as Actual parameter.
 * For Example:
 * In above program:
 * The values passing while calling add function (var1, var2) is called Arguments or Actual parameter.
 * And variable in definition of function(int a, int b) are called parameters or Formal parameters.         ***************/

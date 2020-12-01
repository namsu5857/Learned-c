/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************               Introduction To Functions         ***************/
#include <stdio.h>
char fun(); //Function prototype.
int main(){
    
    /***************                   Functions Declaration:
     * What is Function declaration ?
     * As we know, when we declare a variable, we declare its properties to the compiler.
     * For Example: We declare a variable like this: int var;
     * Properties of this var is follow!
     * 1_Name of variable: var;
     * 2_Type of variable: int;
     * Similarly we can say that function declaration(also called function prototype) means declaring the properties
     * of a function to the compiler.For example: int fun(int, char);
     * Properties of this function is follow!
     * 1_Name of function:        fun
     * 2_Return type of function: int
     * 3_Number of parameters:    2
     * 4_Type of parameter 1 is:  int
     * 5_Type of parameter 2 is:  char
     * IMPORTANT: Function prototype always end with semicolon.It is not necessary to put the name od parameters in
     * function prototype.For Example: int fun(int var1, char var2);
     * In abobve prototype of function we put name of variables(var1, var2),It is not necessary to mention these names.
     * You can simply write data types of arguments that is enough.If you write name of arguments that is allowd.
     * Is it necessary to declare the function before using it ?
     * Not necessary but it is preferred to declare function before using it.
     * What happen when we use the function before defining it ?
     * It will produce error "confilicting type name_of_function" also warning "implicity declaration of function"                   ***************/

    /***************              Let's Consider an example of function declaration.
     *        ***************/

    char a = fun();
    printf("Character is :%c", a);

    return 0;
}
/***************                   Actual definition Function: fun         ***************/
char fun(){
    return 'A';
}

/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.2                   ***************/



/***************                    Scope of variables                   ***************/
#include<stdio.h>
int fun();
int a = 22; //This is global variable we can access anywhere in this file
int main(){
    /***************                    Scope = lifetime                   ***************/
    /***************     The area under which a variable is applicable or alive.
     * Strict Definition
     * A block or a region where a variable is declared, defined and used and when a block
     * or a region ends, variable is automatically destroyed.There are two type
     * of variable by scope 
     * 1_ Local variable
     * 2_ Global variable              ***************/
    int var = 34;
    /*****     int var is local variable inside main this can not access outside of main 
     * Therefore called local to main() function    *****/
    printf("%d \n", var);
    printf("%d \n", a);
    int b = fun();
    return 0;
}

int fun(){
    //printf("%d \n", var);  This will produce error because
    /**********     Here we are trying to access a local variable     *********/
    printf("%d \n", a); //we access it in both function fun and main because it is global variable 

     /**********     Compiler always give pereference to nearest variable(local variable)     *********/

}
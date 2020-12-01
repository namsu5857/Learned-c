/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************               Introduction To Functions         ***************/
#include <stdio.h>
int fun(int, int); //Declaration of function fun;
int main(){  
    /***************         Call By value in Function:
     * Actual parameters:The parameters passed to a function.
     * Formal parameters:The parameters recieved by a function.
     * What is call by value in function ?
     * Here value of actual parameters will be copied to formal parameters and these two different parameters
     * store value in different locations.             ***************/


    /***************    Below we are define two variables var1, var2 and pass these variables to a function
     * fun.Here we are passing copy of values(This function is called by values.)            ***************/
    int var1 = 20, var2 = 30;
    fun(var1, var2);
    /***************      Here we are trying to print the values of var1, var2 to verify that changes in values done 
     * at fun function are reflected the actual variables or not.
     * The code will tell you reality.                     ***************/
    printf("The value of var1 :%d and var2 :%d ", var1, var2);

    return 0;
}
/***************                    definition of Function fun 
 * In this function we are recieving two variables and also declare two variables these are local in this function
 * In this function we are trying to change values of these two varables.But these changes will not reflected to 
 * the actual variable.Because the variable in fun function var1, var2 are local in this function as function will
 * complete these variables will be destroy.        ***************/
int fun(int var1, int var2){
    var1 = 50;
    var2 = 100;
}


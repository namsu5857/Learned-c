/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************               Introduction To Functions         ***************/
#include <stdio.h>
int fun(int *, int *); //Declaration of function fun;
int main(){  
    /***************         Call By reference in Function:
     * Actual parameters:The parameters passed to a function.
     * Formal parameters:The parameters recieved by a function.
     * What is call by reference in function ?
     * Here both actual and formal parameters refers to same memory locations.Therefore, any changes made
     * to formal parameters will get reflected to actual parameters. 
     * NOTE: Here instead of passing values, we pass addresses.             ***************/


    /***************    Below we are define two variables var1, var2 and pass these variables to a function
     * fun.Here we are passing addresses of variables(This function is called by reference.).Here &var1 means
     * address of var1 and &var2 means address of var2(& is also called reference operator).            ***************/
    int var1 = 20, var2 = 30;
    fun(&var1, &var2);
    /***************      Here we are trying to print the values of var1, var2 to verify that changes in values done 
     * at fun function are reflected the actual variables or not.
     * NOTE: The code always spoke TRUTH.                     ***************/
    printf("The value of var1 :%d and var2 :%d ", var1, var2);

    return 0;
}
/***************                    definition of Function fun 
 * In this function we are recieving addresses of two variables instead of values.To store the address of var1 and var2
 * we required pointers(These are variables that capable to hold address of anyother variable).Therefore we declare two
 * pointer variables.int *ptr1 will hold address of var1 and ptr2 pointer will hold address of var2.
 * Inside fun function we are trying to change values of these two varables var1 and var2 through pointers(ptr1, ptr2).
 * Inside of fun function if we write ptr1 and ptr2 that means we are trying to access content of ptr1, ptr2 variable(
 * That is address of var1 and var2).Actually we want to access their values and change them. So * means dereference of 
 * variables.Here we are change the values of ptr1 and ptr2 that will be reflected to actual parameters(var1 and var2).
 *          ***************/
int fun(int *ptr1, int *ptr2){
    *ptr1 = 50;
    *ptr2 = 100;
}


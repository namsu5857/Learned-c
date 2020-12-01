/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.2                   ***************/



/***************                   Register Modifier of variables                   ***************/
#include <stdio.h>

int main(){
    /***************  Register keyword hints the compiler to store a variable in register memory
     * This is done because access time reduces greatly for most frequently referred variables.
     * This is choice of compiler whether it puts the given variable in register or not. 
     * Usually compiler themselves do the necessary optimizations   
     * Syntax for register Modifier
     * register some_data_type some_variable_name s                  ***************/
    register int var = 10;
    printf("%d \n", var);
    return 0;
}

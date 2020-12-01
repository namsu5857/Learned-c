/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.3                   ***************/



/***************                    Constants                     ***************/
#include<stdio.h>

int main(){
    /***************                Using const keyword  Constants
     * Syntax const some_data_type some_variable_name
     * This value will be fix if we try to change value it will return 
     * error "Assignment of Read only variable "     
     * if we declare this variable as global then also no function 
     * can change value of this variable                 ***************/
    const int var = 67;
    printf("%d \n", var);
    return 0;
}
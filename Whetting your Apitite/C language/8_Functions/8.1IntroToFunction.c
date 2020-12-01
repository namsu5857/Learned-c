/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************               Introduction To Function         ***************/
#include <stdio.h>
int AreaOfRect(int length, int breadth){
    int area;
    area = length * breadth;
    return area;
}
int main(){
    
    /***************                   Functions:
     * Function is basically a set of statements that takes inputs, perform some computation and produce output.
     * Syntax of function: Return_type function_name(Set_of_inputs);
     * Here!
     * Return_type: The type of output returned by function.
     * function_name: Name of function.
     * Set_of_inputs: inputs provided to the function.IMPORTANT: Set_of_input is not necessary.
     * Why function ?
     * There are two important reasons of why we are using functions:
     * 1_Reuseability: Once function defined it can reused over and over again.
     * 2_Abstraction: If you are just using the function in your program then you don't have to worry about 
     * how its works inside.For Example: scanf function.                 ***************/

    /***************              Let's suppose i want to calculate the area of rectangular.
     * Now we defined a function for calculating the area of rectangular.We can calculate any 
     * length and width of rectangular by reusing of function.You do not need to write again a
     * seprate code for calculating the area of rectangular.you have to just call this function.        ***************/
    int l, w;
    printf("Please:Enter length of Rectangular: ");
    scanf("%d", &l);
    printf("Please:Enter width of Rectangular: ");
    scanf("%d", &w);
    int area = AreaOfRect(l, w);
    printf("%d", area);

    return 0;
}
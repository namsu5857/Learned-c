/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/




/***************                    Assignment Operators               ***************/
#include <stdio.h>

int main(){

    /***************              Assignment Operators
     * An operator is used to assign value to a variable is called assignment operator.
     * Assignment operator is a binery operator.It requir two values 
     * 1_R-value, 2_L-value.These concept are already discuss in 5.3IncreAndDecre.c
     * This operator is copy R-value to L-value.
     * for example: int var = 5; here var is L-value = is assignment operator and 5 is R-value.
     * These are some Short hand assignment Operators!
     * 1_First addition then assignment(+=).
     * 2_First Subtraction and then assignment(-=).
     * 3_First Multiplication and then assignment(*=).
     * 4_First division and then assignment(/=).   
     * 5_First modulus then assignment(%=).
     * 6_First Bitwise left shift and then assignment(<<=).
     * 7_First Bitwise right shift and then assignment(>>=).
     * 8_First Bitwise AND(&) and then assignment(&=).
     * 9_First Bitwise OR(|) then assignment(|=).
     * 10_First Bitwise XOR(^) and then assignment(^=).
     * Let see an example here...   ***************/
    char a =7;
    a ^= 5;
    printf("%d \n", printf("%d \n", a+=3));
    return 0;
}
/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.16                   ***************/



#include <stdio.h>

int main(){
    /***************                    Question Set 1
     * question 3
     * What is out put of this program ? 
     * As it will be c = 255 + 10 => 265
     * MOD8 as we know char take 1 Byte(8 Bits) so if we compute 265MOD8
     * will be 9 so output of this program will be 9.        ***************/
    char c = 255;
    c = c + 10;
    printf("%d \n", c);
    return 0;
}
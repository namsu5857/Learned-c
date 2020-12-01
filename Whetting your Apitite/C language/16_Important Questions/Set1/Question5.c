/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.16                   ***************/



#include <stdio.h>

int main(){
    /***************                    Question Set 1
     * question 5
     * What is out put of this program ?         ***************/
    unsigned i = 1;
    int j = -4;

    printf("%u", i+j);
    /***************    This will print integer value depends from mechine to machine
     * The Binery representation of 3 is
     * 00000000 00000000 00000000 00000011
     * or 11111111 11111111 11111111 11111100
     * and -3 Binery representation is
     * 11111111 11111111 11111111 11111101 => 4294967293 This on my computer may be different on your computer
     * So this will be print!
     * If we used %d specifier format instead of %u then it will print -3     ***************/
    return 0;
}
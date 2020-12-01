/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.16                   ***************/



/***************                    Question Set 2
 * Question 1
 * What is out put of this program ?        ***************/

#include <stdio.h>

int main(){
    int var = 052;
    printf("%d \n", var);
    /***************      When we write 0 before any decimal value its 
     * means octal value and it is treated as octal value not decimal value.
     * Base of octal number is 8 so
     * 0*8^3 +  5*8^1 + 2*8^0 = 0 + 40 + 2 => 42
     * So answer is 42 this is octal value that is equal to 52 decimal value.
     * Now if we change formate specifier from decimal to octal then this will
     * print 52 as shown below!                  ***************/
    printf("%o \n", var);
    return 0;
}
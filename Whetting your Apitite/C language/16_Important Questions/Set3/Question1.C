/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.16                   ***************/



/***************                    Question Set 1
 * Question 1
 * What is out put of this program ? 
 * When we write 0x before any value it is treated as Hexadecimal value.
 * if you put 0 in front of any value it is treated as Octal value.
 * %x is formate specifier for print Hexadecimal value.
 * You write 0x or 0X both are same.You can use any.Also you can write small ff
 * or capital FF it is totally allowed.But if you write formate specifier in 
 * capital letters X it will print Value in capital letters.                  ***************/

#include <stdio.h>

int main(){
    int var = 0x43FF;
    printf("%x \n", var);

    /***************                    Now if we change the formate specifier from
     * Hexadecimal to Decimal it will print decimal value equal to Hexadecimal value.
     * OR you can say it will convert Hexadecimal value to Decimal value.                  ***************/
    printf("%d \n", var);

    return 0;
}
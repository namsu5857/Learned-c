/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.4                   ***************/



/***************                    Data Types                     ***************/
#include <stdio.h>

int main(){
    /***************                   Character Data Types
     * As we know that computer is capable to understand only 1 and 0 so we have to represent characters 
     * in form of 0 and 1 only.we do not need to bother about it.To encode characters their are sevaral
     * encoding schemes available. But one of the most common encoding scheme is ASCII table scheme.This is link of
     * ASCII table https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html As you see in ASCII
     * table their are some non printable characters and some printable characters.Non printable characters
     * are control characters and printable characters you can print on screen.                                                                                   
     * Their are 128(0 to 127) characters in ASCII table Minimum to minimum required 7 Bits to represent
     *  characters. we have 8 Bits in 1 Byte. 
     * Syntax char some_variable_name = 'N(Character)';
     * you can only assign one character at a time if you assign more than one character it will produce error
     * A Characters in single qoutes not in double qoutes it is very importan.In char you can not assign only
     * characters also you can assign numbers(integer value). it will return characters associated with it. see example at line 30.
     * it also depend upon format specifier you use.The format specifier use to print character is %c.
     * Size
     * size of character is 1 Byte = 8 Bits
     * Range
     * Unsigned: 0 to 255
     * Signed -128 to 127  
     * There is an other ASCII table scheme that is called Extended ASCII table scheme The link of Extended 
     * ASCII Table https://www.ascii-code.com/
     * There are 256 characters In binery representation there are 8 Bits required that is why it use 
     * correctly 1 Byte The range is from 0 to 255.
     * For other language like URDU, Chinese,Russian, Franch and arabic their are many ASCII coding scheme 
     * But our concern is with English.So this cover most of symbols as well as English Characters.                 ***************/
    char var = 65;
    /***************                    Why this happen?
     * Because Binery representation of 65 and A is same that is why it print A                     ***************/
    printf("%c \n", var);

    /***************                    Signed Vs Unsigned
     * Signed is ok But why Unsigned char ?
     * why there is negtive value ?
     * In Extended ASCII and ASCII table 0 to 127 are same for signed and unsigned char.
     * But in Extended ASCII table 128 to 255 is used in unsigned char.
     * -128 and +128 both binery representation is same and
     * -127 and +129 is same binery representation
     * -126 and +130 has same binery representation
     * so on -1 and +255 has same binery representation
     * There is different value but has same binery representation as below example                ***************/
    char a = 129;
    char b = -127;
    printf("%c \n", a);
    printf("%c \n", b);
    /***************    If you exceed limit of char data type is behave same as integer!
     * work like clock.                     ***************/
    return 0;

    /***************                  Summary of whole Program
     * 1_Size of character is 1 Byte (8 Bits).
     * 2_Signed Character range: -128 to 127.
     * 3_Unsigned Character range 0 to 255.
     * 4_Negative value would not buy you any additional powers.
     * 5_In traditional ASCII table, each character require 7 Bits.
     * 6_In Extended ASCII table, each character utilize all 8 Bits.
     *                     ***************/
}
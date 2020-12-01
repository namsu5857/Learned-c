/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/




/***************                    Bitwise Operators               ***************/
#include <stdio.h>

int main(){

    /***************              Bitwise Operators
     * As name suggest it does bitwise manipulation.
     * These are some Bitwise Operators!
     * 1_AND(&).
     * 2_OR(|).
     * 3_NOT(~).
     * 4_Left Shift(<<).
     * 5_Right Shif(>>).
     * 6_XOR(^).      ***************/

    /***************             AND(&) Bitwise Operator      
     * It takes two bits at a time and perform AND operation.
     * AND(&) is binery operator.It takes two numbers and perform bitwise AND.
     * Result of AND is 1 when both bits are 1.For More information see Truth table of 
     * & operation.         ***************/

    /***************             OR(|) Bitwise Operator      
     * It takes two bits at a time and perform OR operation.
     * OR(|) is binery operator.It takes two numbers and perform bitwise OR.
     * Result of OR is 0 when both bits are 0.For More information see Truth table of 
     * | operation.         ***************/

    /***************             NOT(~) Bitwise Operator      
     * It is unary operator,its job is to complement each bit one by one.
     * Result of NOT is 0 when both bit is 1.and 1 when bit is 0.For More information see Truth table of 
     * ~ operation.         ***************/

    /***************        Difference between Bitwise and Logical Operators               ***************/
    /***************        Here we will disscuss Bitwise AND(&&) Operator and Logical
     * AND(|) Operator.This will clear your concept of difference between logical and 
     * bitwise operators.              ***************/
    char x =1, y = 2; // x = 1(0000 0001), y = 2(0000 0010)
    if(x&y) //1&2 = 0(0000 0000)
    {
        printf("Result of x&y is 1 \n");
    }
    if(x&&y) // 1 && 2 means 1 is TRUE and 2 is also TRUE so both are TRUE it will return TRUE
    {
        printf("Result of x&&y is 1 \n");
    }

    /***************             Left Shift Bitwise Operators 
     * It is binary operator means for its operation required two operands
     * first operand << Second operand
     * first operand.
     * whose bits get left shifted.
     * Second operand.
     * Decides the number of places to shift the bits.              ***************/

    /***************                 Some important points related to left shift Bitwise Operators.
     * 1_when bits are shifted to left then trailing positions are filled with zeros(0). 
     * 2_ Left shifting is equivalent to multiplication by 2^right operand.
     * as we see example below var = 3 and var << 1 and result was 6 means 3 * 2^1 => 6.
     * if var << 4 then result will be 48 means 3 * 2^4 => 48.              ***************/
    char var = 3; //3 in binery (0000 0011)
    /***************                    Here we will see how left shift operator is work
     * var << 1 
     * The value of var is 3 and binery representation of 3 is 0000 0011 because it is char data type
     * char data type take 1byte (8 bits) space in memory.
     * var << 1 means left shift of var bit by 1 position.
     * so after left shift result will be 0000 011_
     * at end Trailing position will be filled with zeros(0)
     * so final result will be 0000 0110 that is equal decimal representation to 6.
     * so final output of this program will be 6.               ***************/
    printf("%d \n", var<<1); 

    /***************             Right Shift Bitwise Operators 
     * It is binary operator means for its operation required two operands
     * first operand >> Second operand
     * first operand.
     * whose bits get Right shifted.
     * Second operand.
     * Decides the number of places to shift the bits.              ***************/

    /***************                 Some important points related to left shift Bitwise Operators.
     * 1_when bits are shifted to right then leading positions are filled with zeros(0). 
     * 2_ Right shifting is equivalent to division by 2^right operand.
     * as we see example below var2 = 3 and var2 << 1 and result was 1 means 3 / 2^1 => 1.
     * if var2 = 32 and var2 >> 4 then result will be 2 means 32 / 2^4 => 32/16 => 2.              ***************/
    char var2 = 3;//3 in binery (0000 0011)
    printf("%d \n", var2 >> 1);
    /***************                    Here we will see how right shift operator is work
     * var2 << 1 
     * The value of var2 is 3 and binery representation of 3 is 0000 0011 because it is char data type
     * char data type take 1byte (8 bits) space in memory.
     * var2 >> 1 means right shift of var2 bit by 1 position.
     * so after right shift result will be _000 0001
     * at begning leading position will be filled with zeros(0)
     * so final result will be 0000 0001 that is equal to decimal representation to 1.
     * so final output of this program will be 1.               ***************/


    /***************                    Bitwise XOR Operator               ***************/
    /***************                     Bitwise XOR Operator
     * means Exclusive OR.To understand Bitwise XOR Operator first try to understand Inclusive OR
     * Inclusive OR.
     * Either A is 1 or B is 1 or both are 1 then the output is 1.it means Including Both.
     * Exclusive OR.
     * Either A is 1 or B is 1 then the output is 1 but then both A and B are 1 then output is 0.
     * means Excluding Both.For more information see Truth table of XOR.
     * Bitwise XOR(^) is binery operator.It takes two numbers and perform bitwise XOR.
     * Result of XOR is 1 when two bits are different otherwise result is 0. 
     * let see an example.               ***************/
    int a =4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR, a = %d and b = %d \n ", a,b);
    return 0;
}
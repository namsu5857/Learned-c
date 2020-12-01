/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.7                   ***************/
/***************                        Loops                       ***************/



/***************        Problem related To Loop and Statements 
 * Read carefully and we have to tell how many time "You are Successfull Person in this world and after this world!"
 * will print on screen ?      ***************/
#include <stdio.h>

int main(){
    /***************                   Problem: 1                   ***************/
    int i = 1024;
    for(; i; i >>= 1)
        printf("You are Successfull Person in this world and after this world!");
    /***************                   Solution
     * In above code first of all i initilization a variable i = 1024;
     * and then start for loop.In for loop body printf() function is called.
     * Now we have to tell how many time "You are Successfull Person in this world and after this world!"
     * will print on screen ?  
     * As we know that in for loop there is three steps.
     * Initialization, Condition(Checking Condition), Expression(Increment/decrement).
     * In for loop we write ; instead of initialization.
     * You can skip initilization step but you have to write ; that tell the compiler initialization done
     * before loop,Otherwise compiler will confuse which step have to execute.As we initialization before loop.
     * Second step in for loop is checking condition(TRUE or FALSE).here we write only "i" As we know condition
     * checking return TRUE or FALSE and any value greater than 0 is consider TRUE so it will return TRUE and 
     * Statement will print after this Third step(Expression) will execute.
     * As we write i >>=1 it means i Right shift and assigning 1 means i = i >> 1. As we know 1024 in binery 
     * 100 0000 0000.So through right shift operator 1 bit will shift to right and leading position will filled
     * with 0 so it will become 010 0000 0000.This is equal to decimal representation 512.
     * After this again checking condition that is again TRUE so statement inside for loop will again print
     * and expression will evaluate again.from 010 0000 0000 it will become 001 0000 0000 that is equivalent to
     * decimal representation 256.Again condition will check that is TRUE again statement will print and Expression
     * will evaluate again.This will continue untill expression reached 000 0000 0000 then condition will check that
     * is FALSE so we will come out from loop. So it show bit shift to right
     * 11 time to reach 0(zero).So the printf function will print 11 time.
     *                 ***************/
    return 0;
}
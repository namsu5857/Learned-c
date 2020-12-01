/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.7                   ***************/
/***************                        Loops                       ***************/



/***************        Problem related To Loop and Statements      ***************/
#include <stdio.h>

int main(){
    /***************                   Problem: 3.1   
     * What is output of this c program ?               ***************/
    int i = 0;
    for(printf("one\n"); i < 3 && printf(""); i++){
        printf("Hi");
        }
    /***************                   Solution
     * First of all we initialization a variable "i = 0" and start a for loop 
     * In for loop we have write an initilization step(printf("one\n")) Then checking condition i < 3 && printf("").
     * After this for loop body will evaluete and then i will increment.So first of all printf("one \n") will execute.
     * Now next is condition will check.In condition checking i < 3 && printf("").
     * as we know i is less than 3 is TRUE but printf("") function will return number of characters or integers
     * that print,but here no integer or character is print so it will return 0,That consider as FALSE.
     * TRUE && FALSE will return FALSE so fruther loop will not execute.it will return only one that is 
     * before condition checking step.So the output of this program is.
     * one.                 ***************/
    return 0;
}
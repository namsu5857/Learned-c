/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.16                   ***************/



/***************                    Question Set 3
 * Question 2 Part 1
 * To understand this problem first of all we run a program in comand prompt
 * in whic only main function is written.               ***************/

#include <stdio.h>
static int i = 27;
int main(){
    /***************                    Now i declare a static variable 
     * static int i as global.
     * it will take place in Uninitialized(bss) segment not in data segment.
     * when we define it then it will take place in data segment of memory.                  ***************/
    return 0;
}
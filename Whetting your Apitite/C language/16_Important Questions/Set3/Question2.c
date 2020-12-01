/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.16                   ***************/



/***************                    Question Set 3
 * Question 2
 * What is out put of this program ? 
 * To Understand of this program first of all you have to understand the
 * memory layout of c program.When a c program is run it is not store at one place
 * There are two memory segment.
 * 1_Text/code Segment: Contains Mechine code of the compiled program.This is read only segment.
 * 2_Data Segment:This is divide in many parts,Below it parts
 *  a)Initialized:It store Global, Extern, Static.(Both local and Global), Const global variables.
 *    i) Read only:Constant global variables are stored here.because these can not change in code once declare.
 *   ii) Read write: Local,Global and static variable are stored here becuase they can read and write again and again.
 *  b)Uninitialized:It consist of Uninitialized global, static,(Both local and global), constant global variable.
 *    (bss->Black :This section also have sub-section read only and read write.
 *     Started by
 *     symbol) 
 *  c)Stack: This will study in later!
 *  d)Heap: This will study in later!               ***************/

#include <stdio.h>
static int i;
static int i = 27;
static int i;
/***************         Multiple declaration 
 * are allowed but Multiple defination are not allowed.
 * if you define same variable name multiple time it will
 * generate error.                  ***************/
int main(){
    static int i; //As we know nearest variable is execute first.and static variable if uninitialized then contain
    // zero value,if you initialize it by 0 it still will be considered as Undefined so output will be zero.
    printf("%d \n", i);

    return 0;
}
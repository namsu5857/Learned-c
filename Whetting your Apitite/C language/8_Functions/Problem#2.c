/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************        Problem related To Functions 
 * Read carefully and we have to tell what will print on screen ?      ***************/
#include <stdio.h>
void f1(int, int);
void f2(int *, int *);
int main(){
    /***************                   Problem: 2                   ***************/
    
    int a = 4, b = 5, c = 6;
    /***************                   Here we are calling f1 function by value                   ***************/
    f1(a, b);
    /***************                   Here we are calling f2 function by reference                  ***************/
    f2(&b, &c);
    /***************                   After completing of both functions:
     * The value of variable a, b, c are these below!
     * a = 6, b = 5, c = 6                   ***************/
    printf("%d ", c-a-b);
    return 0;
}
    /***************                   Solution
     * As we know that the variables in void f1 function are local as function complete these will be
     * destroyed.So as changes made in f1 function will not get reflected in main function.               ***************/
void f1(int a, int b){
    int c;
    c = a; a = b; b = c;
    
}
    /***************                   Solution
     * As we know that the variables in void f2 function are pointers.Here we are recieving address of variables
     * So changes we made in f2 function will get reflected in main function also.
     * Therefore address of b variable in main function will pass to pointer a in f2 function and address of c variable
     * in main function will pass to b pointer in f2 function.
     * After completion of f2 function a = 6 and b = 5.
     * C variable is local as function will complete it will be destroyed.                ***************/
void f2(int *a, int *b){
    int c;
    c = *a; *a = *b; *b = c;
    
}
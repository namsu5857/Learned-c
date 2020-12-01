/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/




/***************                    Problem  #2 related to Operators               ***************/
#include <stdio.h>

int main(){

    /***************                    What will be output of this Problem  
     * So Output of this program will be 5 4            ***************/
    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;

    printf("%d %d %d %d \n", a, b, c, d);
    /***************               Solution of Problem 
     * First of all we have to solve expression c = ++a || b++; and d = b-- && --a;
     * c = ++a || b++;
     * As we know a = 1 and ++a(Pre Increment) happen first so a will become 2.
     * As we know that ||(Logical OR operator is return TRUE or FALSE), So here 2
     * will consider TRUE.Now because of Short circuit concept b++ will not evaluated.
     * So c will assign TRUE(means 1).after c evaluated a = 2, b = 1;
     * d = b-- && --a;
     * here b--(Post decrement) So b = 1 That means TRUE, &&(Logical AND) Operator will
     * check TRUE or FALSE, So first operand is TRUE, Now we will see 2nd operand.
     * --a(pre Decrement) first decrement will happen and then asignment happen So a = 1
     * That is TRUE, 2nd operand also TRUE. TRUE && TRUE will return TRUE and d will allocated 1
     * means TRUE.
     * So final values of variables will be.
     * a = 1, b = 0, c = 1, d = 1.
     * That is answer.
     *   ***************/
    return 0;
}
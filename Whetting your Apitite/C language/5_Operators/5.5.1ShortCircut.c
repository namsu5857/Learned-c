/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/




/***************                    Logical Operators               ***************/
#include <stdio.h>

int main(){

    /***************              Short circut in Logical Operators  
     * Short circut in case of &&:
     * simply means if there is condition anywhere in the expression that returns
     * FALSE, then the rest of the conditions after that will not be evaluated.
     * The concept of short circut in c is very important because it save a lot of
     * time.let see with example...   ***************/

    int a = 5, b = 3;
    int incr1, incr2, incr3;
    incr1 = (a < b) && (b++);
    printf("%d \n", incr1);
    /***************     As we know TRUE means 1 and FALSE means 0
     * So Out put of this program will be 0(FALSE), and 3 value of b variable. b++ expression
     * will not evaluate because of short circut.              ***************/
    printf("%d \n", b);
    /***************                    Now we change above code              ***************/
    incr2 = (a > b) && (b++);
    printf("%d \n", incr2);
     /***************         Here first expression is TRUE so second expression will also checked
      * and will evaluted value of "b" variable will increment by one.
      * so out put will be.
      * 1 means TRUE.
      * 4 "b" b will increment by one.             ***************/
    printf("%d \n", b);

    /***************              Short circut in Logical Operators  
     * Short circut in case of ||:
     * simply means if there is condition anywhere in the expression that returns
     * TRUE, then the rest of the conditions after that will not be evaluated.
     * The concept of short circut in c is very important because it save a lot of
     * time.let see with example...   ***************/
    int x = 6, y = 4;
    incr3 = (x > y) || (y++);
    /***************      Here y++ will not evaluate because of short circut concept.
     * x > y return TRUE so next condition will not check.
     * output will be 1 means TRUE.
     * 4 value of y.              ***************/
    printf("%d \n", incr3);
    printf("%d \n", y);
    return 0;
}
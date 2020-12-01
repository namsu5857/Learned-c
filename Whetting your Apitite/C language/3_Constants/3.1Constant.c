/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.3                   ***************/



/***************                    Constants                     ***************/
#include<stdio.h>
    /***************                    Constants
     * As Name suggests Something that never change
     * Once defined cannot modified later in the code.
     * Defined Constant!
     * There is two method of defining constant.
     * 1_Using #define 2_Using const keyword.                     ***************/

    /***************                    Constants Using #define
     * syntax #define NAME value 
     * Name is also called Macro.
     * job of preprocessor(Not Compiler) to replace NAME with value.  ***************/  
#define PI 3.14159
#define add(x, y) x+y
#define greater(a, b) if(a>b) \
                          printf("%d is greater than %d \n",a,b); \
                      else \
                          printf("%d is lesser than %d \n",a,b);
                          
int main(){ 
    printf("%.5f \n", PI);
    

    /***************                    Take Aways                     
     * please don't add semicolon at the end 
     * Choosing capital letters for NAME is good practice. 
     * Whatever inside double quotes "" won't get replaced  ***************/
    printf("The value of PI %f \n", PI);
    /***************  we can use Macros like functions as shown above at line 20 and !     ***************/
    printf("The Addition of two Numbers is %d \n", add(90, 32));
    /***************  we can write Multiple lines Using \ as shown above at line 21 and !     ***************/
    greater(5, 6);
    /***************  First Expension then evalution as shown Below!     ***************/
    printf("Result of expression a*b + c is: %d \n", 5*add(4, 3));

    /***************  There are some predefined macros
     * like __DATE__ , __TIME__ can print current date and time!     ***************/
    printf("The date of Today: %s \n",__DATE__);
    printf("The Current time: %s \n",__TIME__); 
    return 0;
}
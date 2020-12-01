/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.16                   ***************/



/***************                    Question Set 2
 * Question 2
 * What is out put of this program ?        ***************/

#include <stdio.h>
#define STRING "%s\n"
#define DIGITAL "WELCOME TO DIGITAL ACADEMY"


int main(){

    printf(STRING, DIGITAL);
    /*************** As we know preprocessor job is to replace macro with 
     * original values so 
     * STRING will replaced with "%s \n" and DIGITAL will replace with 
     * "WELCOME TO DIGITAL ACADEMY"  
     * So finally output will be "WELCOME TO DIGITAL ACADEMY"                ***************/
    return 0;
}
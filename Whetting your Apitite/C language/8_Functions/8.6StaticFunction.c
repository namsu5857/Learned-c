/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************               Introduction To Static Functions         ***************/
#include <stdio.h>
int fun(int, int); //Declaration of function fun;
int main(){  
    /***************           what is static functions:
     * In c, Functions are global by default.
     * This means if we want to access the function outside from the file where it is declared,
     * we can access it easily. 
     * NOTE: Now if we want to restrict this access, then we make our function static by simply 
     * putting a keyword static in front of function.To see usage of static function see the 
     * "Project8.6"                 ***************/

    /***************               Important Take aways:
     * Static functions are restricted to the file where they are declared.
     * Reuse of the same function in another file is pssible.That means you
     * can create same name function in another file also.         ***************/

    return 0;
}



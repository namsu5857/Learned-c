/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.16                   ***************/



#include <stdio.h>

int main(){
    /***************                    Question Set 1
     * question 4
     * Which of the following statements are correct corresponding to the definition of integer
     * 1_signed int i;           2_long int i; 
     * 3_signed i;               4_long long i;
     * 5_unsigned i;             6_long i; 
     * All are correct and allowed.....    ***************/

    signed int i;           
    signed j;  //This is correct because compiler will assume integer implicitly!              
    unsigned k; //This is correct because compiler will assume integer implicitly!
    long l; 
    long long m;  
    int n;           
    printf("%10s", "You are geniuos!");
    return 0;
}
/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.7                   ***************/
/***************                        Loops                       ***************/



/***************        Problem related To Loop and Statement       ***************/
#include <stdio.h>

int main(){
    /***************                   Problem: 4 
     * What is output of this c program...                 ***************/
    unsigned int i = 500;
    while(i++ != 0);
    printf("%d \n", i);
    /***************                   Solution
     * As we know that unsigned int range in my computer is: 0 to 4294967295 in my computer.
     * In above program first of all we initializa a variable i = 500; and then start while loop.
     * Inside while loop 1st  condition will check that i != 0. 
     * As we know 500 != 0. It will return TRUE then i will increment(As we know it is post increment operator). So i will become 501 and then.
     * IMPORTANT: Here "printf("%d \n", i) is not a part of while loop because after while loop there is semicolon"
     * So again 1st condition will check i != 0, 501 != 0 again return TRUE.Again increment will happen and i will
     * become 502.It will continue untill i reched to maximum value of integer that is4294967295.It will return TRUE
     * again increment will happen now i will become 0 IMPORTANT: whenever we exceed the limit of any data type we reached
     * its begining that is 0, i = 0, 0 != 0 will return FALSE and i will increment to 1
     * now printf function will return value of i that is one.So final output is
     * 1                 ***************/
    return 0;
}
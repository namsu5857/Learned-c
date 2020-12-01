/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.7                   ***************/
/***************                        Loops                       ***************/



/***************        Problem related To Loop and Statement       ***************/
#include <stdio.h>

int main(){
    /***************                   Problem: 5 
     * What is output of this c program...                 ***************/
    int x = 3;
    if(x == 2); x = 0;
    if(x == 3) x++;
    else x += 2;
    printf("x = %d \n", x);
    /***************                   Solution
     * In above program 1st of all we have initialization a variable x and assign it value 3,
     * After this if construct,inside of if construct we are checking condition, x == 2 or not
     * As x is not equal to 2. IMPORTANT: "After if construct there is semicolon, x = 0 is not
     * part of this if construct". So at same line we are again assigning value of x = 0.So in next line
     * again there is if construct.Inside this if construct we are again checking condition x == 3.
     * As x is not equal to 3 So else part will evaluate x += 2 => x = x + 2.The value of x is 0 So
     * x = 0 + 2 => x = 2. Finally printf will print value of i that is...
     * 2                ***************/
    return 0;
}
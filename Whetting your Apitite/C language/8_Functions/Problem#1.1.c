/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************        Hoem work related To Functions 
 * Read carefully and we have to tell what will print on screen ?      ***************/
#include <stdio.h>
int func(int num);
int main(){
    /***************                   Problem: 1.1                   ***************/
    
    int a = func(435);
    printf("The output of this problem is: %d !", a);
    return 0;
}
    /***************                   Solution
     * As we are calling function "func" we pass it value 435.This 435 will assign to num variable in func
     * function in func function we declare another variable "count" and assign it to 0 value.After this we
     * are calling while loop and pass it num variable.Inside while loop we are incrementing count variable 
     * by 1 and also right shift num variable(bit) by position 1 and back assign to num.Means num = num >> 1;
     * As while loop will complete we will print count variable.                 ***************/
int func(int num){
    int count = 2;
    while(num){
        count++;
        num >>= 2;
    }
    return count;
}
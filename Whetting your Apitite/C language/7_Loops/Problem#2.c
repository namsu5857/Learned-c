/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.7                   ***************/
/***************                        Loops                       ***************/



/***************        Problem related To Loop and Statements 
 * What is output of this c program ?      ***************/
#include <stdio.h>

int main(){
    /***************                   Problem: 2                   ***************/
    int i;
    for(i = 0; i < 20; i++){
        switch(i){
            case0: i += 5;
            case1: i += 2;
            case5: i += 5;
            default: i += 4;

        }
        printf("%d", i);
    }
    /***************                   Solution
     * In above program we have initialized a variable "i", and then a for loop.In for loop first
     * step is initialization that i = 0, then check condition is i less than or not 20 yes it is less than 20
     *  so we will execute body of for loop.In for loop switch statement will execute.In switch i = 0.So case0 will execute
     * and case0 is i = i + 5; so i will become 5,"Due to there is no breake", other cases also will execute untill
     * it reach next break.Si in case1: i = i + 2 => 7.Now here is also no break so case5 will evaluated and i will
     * become 12.here also no break so case default will also evaluated so i become 16, So 16 will print on screen.
     * Now increment happen and i become 17.Now we will check condition 17 is less than 20 or not yes it is less than
     * 20 so switch statement will evaluate. and in switch 17 is no case so only default will evaluate and in default case 
     * i will be i = 17 + 4 => 21.So 21 will print on Screen,Now increment will happen and i become 22.again condition will 
     * check in for loop 22 < 20 that return FALSE so we will come out from loop whole program completed Succefully and final output will be.
     * 16 21                 ***************/
    return 0;
}
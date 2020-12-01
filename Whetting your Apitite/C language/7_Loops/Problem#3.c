/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.7                   ***************/
/***************                        Loops                       ***************/



/***************        Problem related To Loop and Statements 
 * How many time "You are Successfull" will print on screen as output of this c program ?      ***************/
#include <stdio.h>

int main(){
    /***************                   Problem: 3                  ***************/
    int i = -5;
    while(i <= 5){
        if(i >= 0){
            break;
        }
        else{
            i++;
            continue;
        }
        
        printf("You are Successfull");
    }
    /***************                   Solution
     * As i = -5 then we check condition in while loop i <= 5.That will return TRUE,Now in if statement
     * we will check i >= 0 that return FALSE so else part will execute.In else Part i will increment and
     * become -4.Dut to continue statement this iteration of loop will end and rest of lines will not execute
     * so in while loop condition will again check that return TRUE again if part return FALSE so else part will
     * evaluate and i will increment so i become -3 and due to continue this iteration will end next iteration will
     * start and in while loop condition will check.This will continue untill i become 0.While i is equal to zero so
     * in while loop condition will check that return TRUE so we will come in if-else statement and if(i >= 0) will
     * return TRUE and due to break loop will terminate and whole program will complete successfully.
     * We see there is not printf() function call a single time.So "You are Successfull" will not print.
     * and there will be no output of this program also.                   ***************/
    return 0;
}
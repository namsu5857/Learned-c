/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.7                   ***************/
/***************                        Loops                       ***************/



/***************        Introduction To Loop Control Statements     ***************/
#include <stdio.h>

int main(){
    /***************                   Break Statement 
     * Break is used to terminate from loop. 
     * Example:
     * Write a program to allow user to enter integer untill He/she enters a negtive
     * Number or a zero.              ***************/
    int n;
    printf("Enter an integer: \n");
    scanf("%d", &n);

    while(n != 0){
        if(n < 0){
            break;
        }
        printf("Enter an integer: \n");
        scanf("%d", &n);
    }
    /***************        Here first of all we take input from user and store it to a variable
     * n and then we are checking condition while(n != 0) if n is not equal to zero.we will enter in loop.
     * In while loop we will again check condition if(n < 0).If n is less than 0 means negtive number then "break
     * will execute and rest of line will not execute". if n is grater than 0 then again user allow to enter number
     * and will continue untill condition is goes FALSE.    ***************/



    /***************                   Continue Statement 
     * Similarly to break but instead of terminating from the loop.It forces to execute the next iteration
     * of the loop.
     * Example:
     * Write a program to print all odd numbers from 1 to 20.               ***************/
    int i, j = 2;
    for(i = 0; i<20; i++){
        if(i == j){
            j = j + 2;
            continue;
        }
        printf("%d \n", i);
    }
    /***************        In above program i initialize two variables."i" and "j = 2"
     * and then start for loop untill "i" reached 20.In for loop again check condition i == j or not if yes 
     * then j = j + 2 and continue will execute."This iteration will end no printf will execute and next iteration
     *  will start mean loop is still continue!" but if i == j is FALSE then printf will execute.This will continue untill "i" is reached 20.
     *     ***************/
    return 0;
}
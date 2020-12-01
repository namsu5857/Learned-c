/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
#include <math.h>
/***************            Addition of two numbers without "+" operator
 * WAP to add two numbers without (+) operator!

 *                 ***************/

/***************                          Idea: 
 * The idea is to use increment and decrement operators  
 * let suppose there are two variables.
 * x = 3, y = 4;
 * Algorithm.
 * Step1: x++; y--;
 * Step2: repeat step1 untill y become 0.
 * 1st iteration: x = 4, y = 3.
 * 2nd iteration: x = 5, y = 2.
 * 3rd iteration: x = 6, y = 1.
 * 4th iteration: x = 7, y = 0. Stop.
 * x = 7, y = 0;       ***************/
int main(){

    int x,y;

    do{
    /***************       Here we are asking from user to input numbers that he/she
     * want to add.               ***************/
        printf("Please! Enter two numbers you want to add or zero to go out of program: ");
        scanf("%d %d", &x, &y);
        if(x == 0 && y == 0){
            break;
        }
        else{
             while(y != 0){
                 x++;
                 y--;
             }
            printf("Sum of two values is: %d \n", x);
            }
    }while(1);
    printf("Opoose! You are out of program now!");
    /***************         IMPORTANT: This Program will work only for
     * positive integer not for negtive integers                ***************/
    return 0;
}

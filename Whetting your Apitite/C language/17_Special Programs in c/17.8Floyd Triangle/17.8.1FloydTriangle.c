/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
#include <math.h>
/***************                     Floyd's Triangle                 ***************/

/***************                     Write a Program
 * to print Fibonacci series upto n number of terms.                ***************/

/***************                    What is Floyd's Triangle.
 * Floyd's triangle(nammed after a computer scientist-Robert W.Floyd) is a right angled triangular
 * array of natural numbers.
 * It is filled by natural numbers consuctivily starting with 1 in top left corner.
 * For Example:
 * A floyd triangle with 5 rows.This will look like below!
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * 11 12 13 14 15          ***************/
int main(){

    int row;

    do{
    /***************       Here we are asking from user to input number that he/she
     * want to print rows of floyd's triangle.               ***************/
        printf("Please! Enter number of rows you want in Floyd's Triangle or zero to go out of program: ");
        scanf("%d", &row);
        int i,j, n = 1;
    /***************                     To come out from loop.Finished the program                 ***************/
        if(row == 0){
            break;
        }
        else{
    /***************                  Run For loop till number of rows to print in floyd's triangle.       ***************/
            for(i = 1; i <= row; i++){
    /***************                  This for loop is to Printing Natural Number in form of Right angle Triangle                 ***************/
                for(j = 1; j <= i; j++){
                    printf("%d ", n);
                    n++;
                }
    /***************                     To start new line.                 ***************/
                printf("\n");
             }
            }
    }while(1);
    printf("Opoose! You are out of program now!");

    return 0;
}

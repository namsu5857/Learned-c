/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
#include <math.h>
/***************                     Fibnocci Series                 ***************/

/***************                     Write a Program
 * to print Fibonacci series upto n number of terms.                ***************/

/***************                    What is fibonacci series.
 * The term Fibonacci comes from the name of an italien mathematician Leonardo of pisa.Known as fibonacci.
 * What is fibonacci series ?
 * In fibonacci series, next term is obtained by taking sum of previous two terms.
 * For Example: n = 1, 2, 3, 4, 5, 6 => 0, 1, 1, 2, 3, 5. 
 * if we want to know 5th term it is sum of previous terms means value of 3rd term 1 + value of 4th term 2 
 * That is equal to 3.
 * Mathematicially fibonacci series...
 * fib(n) => fib(n-1) + fib(n-2).
 * The beauty of fibonacci series is you can find it in nature.
 * A flower pattern or Glexy pattern.          ***************/
int main(){

    int x;

    do{
    /***************       Here we are asking from user to input number that he/she
     * want to print fibonacci series.               ***************/
        printf("Please! Enter number of terms you want to Fibonacci series or zero to go out of program: ");
        scanf("%d", &x);
        int i, b = 1, result, a = 0;
    /***************                     To come out from loop.Finished the program                 ***************/
        if(x == 0){
            break;
        }
        else{
    /***************                  Run For loop till the terms we want to print Fibnocci Series       ***************/
             for(i = 1; i <= x; i++){
    /***************                    Printing Fibnocci Series                 ***************/
                 printf("%d ", a);
    /***************                  Addition of prevoius two terms              ***************/
                 result = a + b;
    /***************                 Assigning new values to next terms           ***************/
                 a = b;
                 b = result;
             }
            }
    }while(1);
    printf("Opoose! You are out of program now!");

    return 0;
}

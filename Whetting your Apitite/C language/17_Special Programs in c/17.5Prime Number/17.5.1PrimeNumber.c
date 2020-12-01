/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
#include <math.h>
/***************                     Prime Number                ***************/

/***************                     Pre Requisite: What is prime number ? 
 * A number greater than 1 is prime number.if it has only two factors, namely 1 and the 
 * number itself.For Example
 * 2, 3, 5, 7, 11, 13, 17....
 * Composite Number:
 * A composite number is a positive integer which is not prime i.e.which has factors other 
 * than 1 and itself.4, 6, 8, 9, 10....
 * IMPORTANT: Is 1 a prime number ?
 * No it is not a prime number, because according to definition of prime numbers.A prime number
 * is a number which has exactly two divisor, 1 and itself.But 1 has only one divisor i.e itself
 * Therefore it is not a prime number.
 * Another reason-it violates the fundamental theorem of arithmetic.
 * According to this theorem-Every positive integer greater than one can be wrriten uniquely as 
 * the product of primes.For Example.
 * 9 = 3*3.           ***************/

/***************                                     ***************/
int main(){
    /***************                     Now came on problem! Task-1
     * In order to find whether a number is prime or not,We first need to calculate the sequare root
     * of that number and then we divide that number by numbers less than or equal to square root of
     * that number.If it divisible by any of the numbers then we can say that the number is not a prime
     * number else it is a prime number.For Example
     * we need to find 23 is prime number or not ?
     * Step1: Take square root of 23,which is nearly 4.7958 = 5
     * Step2: Divide 23 by numbers greater than 2 and less than or equal to 5.if it is divisible by any
     * of those numbers then it is not a prime number else it is prime number.
     * As 23 is not divisible by any of those numbers therefore 23 is a prime number.            ***************/


    int n;

    do{
    /***************       Here we are asking from user to input number that he/she
     * want to check prime or not.               ***************/
        printf("Please! Enter a number to check prime or not or zero to go out of program: ");
        scanf("%d", &n);
        int var1, var2, count = 0, i;
        if(n == 0){
            break;
        }
        else{
    /***************   Finding the square root.
     * sqrt means square root available in math.h library.We include this library in top.
     * Syntax of sqrt =>  double sqrt(double x);
     * ceil function returns a smallest integer greater than or equal to x.it also available
     * in math.h library.Syntax of ceil =>  double ceil(double x); 
     * For example:
     * sqrt(2) => 1.414
     * ceil(1.414) => 2    ***************/
            var1 = ceil(sqrt(n));
    /***************                    Check the divisibility
     *             ***************/
            var2 = n;
            for(i = 2; i <= var1; i++){
               if(var2%i == 0)
                   count = 1;
            }

    /***************     Here we check whether the number is prime number or not.   ***************/
            if((count == 0 && var2 != 1) || var2 == 2 || var2 == 3)
                printf("%d is a Prime Number \n", var2);
            else{
                printf("%d is not a Prime Number \n", var2);
            }
        }
    }while(n != 0);
    printf("Opoose! You are out of program now!");
    return 0;
}

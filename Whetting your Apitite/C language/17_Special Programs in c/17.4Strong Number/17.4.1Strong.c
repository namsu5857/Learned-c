/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
/***************                     Strong Number                ***************/

/***************                     Pre Requisite: What is Strong number ? 
 * Strong number is a number in which the sum of factorial of individual digits of a number is equal to 
 * the original number.For Example
 * 145 => 1! + 4! + 5! = 1 + 24 + 120 = 145.
 * Factorial:
 * factorial of a positive integer n, is the number which obtaind by multiplying all positive integers
 * less than or equal to n.For Example:
 * 3! => 3*2*1 => 6
 * 5! => 5*4*3*2*1 => 120
 * That means in general!
 * n! => n*(n-1)*(n-2)*.....4*3*2*1.
 * 
 *            ***************/


int main(){
    /***************                     Now came on problem! Task-1
     * Calculate the factorial of each digit of a number and add them.
     * q = n, fact = 1, result = 0;
     * while(q != 0){
     *     rem = q%10;
     *     for(i = 1; i <= rem; i++){
     *         fact = fact*i;
     *     }
     *     result = result + fact;
     *     fact = 1;
     *     q = q/10;
     * }
                 ***************/

        /***************                     Now came on problem! Task-2
     *  Check whether the calculated result is equal to the actual number or not.             ***************/
    int n;

    do{
        printf("Please! Enter number of rows you want in your pyramid or zero to go out of program:");
        scanf("%d", &n);
        int q = n, fact = 1, result = 0, rem, i;
        if(n == 0){
            break;
        }
        else{
    /***************   Calculate the factorial of each digit of a number and add them.     ***************/
            while(q != 0){
                rem = q%10;
                for(i = 1; i <= rem; i++){
                fact = fact*i;
            }
                result = result + fact;
                fact = 1;
                q = q/10;
        }
    /***************     Here we check whether the calculated result is equal to the actual number or not.   ***************/
            if(result == n)
                printf("%d is Strong Number \n", n);
            else{
                printf("%d is not Strong Number \n", n);
            }
        }
    }while(n != 0);
    printf("Opoose! You are out of program now!");
    return 0;
}

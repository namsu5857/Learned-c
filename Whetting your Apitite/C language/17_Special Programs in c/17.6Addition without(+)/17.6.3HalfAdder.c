/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
#include <math.h>
/***************            Addition of two numbers without "+" operator
 * WAP to add two numbers without (+) operator!
 * Also work for negtive integers.                ***************/

/***************                          Idea: 
 * The idea is to use to HALF Adder method.  
 * let suppose there are two variables.
 * while(b != 0){
 *     sum = a^b; This is bitwise xor.
 *     carry = (a&b)<< 1; This is bitwise AND and Left shift by 1.
 *     a = sum;
 *     b = carry; 
 * }
 * let see this code with help of Example...
 * 5 -> Binery representation of 5 is:    0101
 * 10 -> Binery representation of 10 is:  1010 
 * 15 -> Binery representation of 15 is:  1111
 * In iteration number 1: sum =   1111
 * In iteration number 1: carry = 0000
 * As sum is store in a and carry store in b as b = 0 we will come out from loop
 * As above example carry is 0000 means b = 0 so loop will finished and output will 
 * be 15 in decimal or 1111 in binery.
 * Let see another example...
 * 7 -> Binery representation of 7 is : 0111
 * 2 -> Binery representation of 2 is : 0010
 * 9 -> Binery representation of 9 is : 1001
 * In this example... 
 * In iteration number 1: sum =   0101 that is xor of 7 and 2.
 * In iteration number 1: carry = 0010 due to left shift operation carry is 0100.
 * In iteration number 2: sum =     0001
 * In iteration number 2: carry =   0100 due to left shift operation carry is 1000.
 * In iteration number 3: sum =     1001.That is our desired result.
 * In iteration number 3: carry =   0000.
 *       ***************/
int main(){

    int sum, carry,x,y;

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
                sum = x^y;
                carry = (x&y)<<1;
                 x = sum;
                 y = carry;
             }
            printf("Sum of two values is: %d \n", x);
        }
    }while(1);
    printf("Opoose! You are out of program now!");
    /***************         IMPORTANT: This Program will work all for
     * positive integer as well as for negtive integers also!               ***************/
    return 0;
}

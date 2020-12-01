/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
#include <math.h>
/***************                       Perfect Number                ***************/

/***************                     Write a Program
 * that Check Number is Perfect or not.                ***************/

/***************                      Basic:
 * What is a perfect number ?
 * Perfect Number is a positive integer that is equal to the sum of all its proper positive divisor
 * excluding the number itself.
 * For Example: 6 is Perfect number.
 * Because the proper positive divisors of 6 are 1, 2 and 3.(Excluding 6).
 * and sum of all its positive divisors i.e. 1 + 2 + 3 => 6.        ***************/
int main(){

    int num;

    do{
    /***************       Here we are asking from user to input binery number that he/she
     * want to convert binery number to decimal number.               ***************/
        printf("Please! Enter a number to check perfect number or not or zero to go out of program: ");
        scanf("%d", &num);
        int i, rem, sum = 0;
    /***************                     To come out from loop.Finished the program                 ***************/
        if(num == 0){
            break;
        }
        else{
    /***************                  Run for loop till num - 1, 
     * and add sum in sum variable.       ***************/
            for(i = 1; i < num; i++){
    /***************         Here we are dividing number by i and reminder store in rem
     * variable.                ***************/
                rem = num%i;
    /***************         if i means divisor is proper divisor only then we will sum otherwise
     * we will ignore it.                ***************/  
                if(rem == 0) 
                    sum = sum + i;
            }
    /***************         Here we are checking number is perfect or not.                ***************/  
            if(sum == num)
                printf("%d is a perfect number \n", num);
            else
                printf("%d is not a perfect number \n", num);
        }
    }while(1);
    printf("Opoose! You are out of program now!");

    return 0;
}

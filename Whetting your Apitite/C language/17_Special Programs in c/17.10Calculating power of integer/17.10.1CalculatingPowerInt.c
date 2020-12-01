/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
#include <math.h>
/***************                     Calculating Power of an integer                ***************/

/***************                     Write a Program
 * that Calculate Power of an integer.                ***************/

/***************                      Basic:
 * Sppose we want to calculate the power of a^b
 * a^b is equivalent to a*a*a*a*.....b times.Where a and b are integers.
 * That means if you want to calculate the power of 2^3 it is equivalent to 2*2*2.
 * That means you are multiplying 2, 3times.
 * Now if you have 2^-4.Then we have to take reciprocel of this number.That is:
 * 1/2*1/2*1/2*1/2.
 *         ***************/
int main(){

    int expo, base, Exponent;

    do{
    /***************       Here we are asking from user to input base number(which power we have to calculate) 
     * and exponent number(Power) that he/she want to calculate.               ***************/
        printf("Please! Enter Base of Number or zero to go out of program: ");
        scanf("%d", &base);
        printf("Please! Enter the power you want to calculate: ");
        scanf("%d", &Exponent);
        int power = 1;
        double power1 = 1.0;
    /***************                     To come out from loop.Finished the program                 ***************/
        if(base == 0){
            break;
        }
        else{
    /***************                Here we are calculating power of positive integer.       ***************/
            expo = Exponent;
            if(Exponent > 0){
                while(Exponent != 0){
                    power = power*base;
                    Exponent--; 
                }
                printf("%d to the power of %d is: %d \n", base, expo, power);
            }
            else{
                while(Exponent != 0){
                    power1 = power1*(1.0/base);
                    Exponent++; 
                }
                printf("%d to the power of %d is: %.10f \n", base, expo, power1);
            }
            }
                       
        }while(1);
    printf("Opoose! You are out of program now!");
    return 0;
}
    


/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
/***************                     Armstrong Number                ***************/

/***************                     Pre Requisite: What is Armstrong number ? 
 * An armstrong number of order n is a number in which each digit when multiplied by it self
 * n number of times and finally added together, results the same number.For Example...
 * 371 is a 3 digit number .Therefore its order is 3.
 * Now here each digit is multiplied by itself 3 times and finally added together and result in our 
 * orignal number i.e
 * 3*3*3 + 7*7*7 + 1*1*1 => 27 + 343 + 1 => 371, Now we can say that 371 is armstrong number.             ***************/

/***************                                     ***************/
int main(){
    /***************                     Now came on problem! Task-1
     * first find out, how many digits are there in your number ?
     * It complosry because we can multiply each digit that times.So here is program for this!
     * count 0;
     * while(q != 0){
     *     q = q/10;
     *     count++;
     * }            ***************/

        /***************                     Now came on problem! Task-2
     * Multiply each digit n times(in our example, n = 3) and add them.
     * cnt = count, result = 0;
     * while(q != 0){
     *     rem = q%10;
     *     while(cnt != 0){
     *         mul = mul*rem;
     *         cnt--; 
     *    }
     *     result = result + mul;
     *     cnt = count;
     *     q = q/10;
     *     mul = 1;
     * }            ***************/

    /***************                        Now came on problem! Task-3
     * Check whether the calculated result is equal to the actual number or not.                ***************/
    int number;

    do{
        int count = 0, result = 0, mul = 1, cnt, rem, q;
        printf("Please! Enter a number to check Armstrong number or zero to go out of program:");
        scanf("%d", &number);
        if(number == 0){
            break;
        }
        else{
            q = number;
    /***************     Here we are checking , how many digits are there in given number.  ***************/
            while(q != 0){
                q = q/10;
                count++;
            }
            cnt = count;
            q = number;
    /***************     Here we are multiplying each digit n times(in our example, n = 3) and add them.  ***************/
            while(q != 0){
                rem = q%10;
                while(cnt != 0){
                    mul = mul * rem;
                    cnt--;
                }
                result = result + mul;
                cnt = count;
                q = q/10;
                mul = 1;
            }
    /***************     Here we check whether the calculated result is equal to the actual number or not.   ***************/
            if(result == number)
                printf("%d is Armstrong Number \n", number);
            else{
                printf("%d is not Armstrong Number \n", number);
            }
        }
    }while(number != 0);
    printf("Opoose! You are out of program now!");
    return 0;
}

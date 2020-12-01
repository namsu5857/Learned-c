/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
/***************                     Plindromes Number                ***************/

/***************                     Pre Requisite: What is palindromes number ? 
 * A Number or a word or a phrase if read backwards gives the same number or a word or a phrase
 * as it is being read forward. 
 * for example: 1221, racecar, 24542 etc          ***************/

/***************                                     ***************/
int main(){
    /***************                     Now came on problem! Idea!
     * Make last number the first number, 2nd last number the second number and so no...
     * That means you need to reverse the number and if the reversed number is equal to 
     * actual number then we can say that the number is palindrome. 
                 ***************/

    /***************                     What happen when we divide number by 10 ?
     * When we divide a number by 10, The remainder gets is always last digit of that number.
     * And quotien we get is number except last digit.For Example...
     * 456/10 => Remainder = 6 and quotient = 45.by using this property we will reverse the number
     * very easy.             ***************/
    
    int n;
    do{
        int q, rem, result = 0;
        printf("Please! Enter the number to check palindrome number or not, or zero to go out of program:");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        else{
            q = n;
            while(q != 0){
                rem = q%10;
                result = result*10 + rem; //This is technique of reverse a number
                q = q/10;
                }
            if(result == n){ //here is checking Number is palindrome or not
                printf("It is palindrome Number! \n");
                }
            else{
                printf("No! Its not a palindrome Number! \n"); 
                } 
        }           
    }while(n != 0);
    printf("Opoose! You are out of program now!");
    return 0;
}

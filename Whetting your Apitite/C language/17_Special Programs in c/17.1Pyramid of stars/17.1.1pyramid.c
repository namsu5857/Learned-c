/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                    Chapter No.17                   ***************/



/***************                    Special Programs                ***************/

#include <stdio.h>
/***************                     Pyramid of stars                ***************/

/***************                     Pre Requisite: Matrices 
 * let's Suppose we have 2D array(two dimensional).There is two rows and two columns. rows represent
 * by "i" and columns represent by "j".Now let we have to print a star in box of 2 rows and 2 columns
 * For this purpose code is given below!
 * for(i = 1; i <= 2; i++){
 *     for(j = 1; j <= 2; j++){
 *         printf("*");
 *     }
 * }  
 * first of all i is 1 and for loop will run until i <= 2 means only 2 time,So here i <= 2 condition is
 * Satisfied nested for loop will execute, In nested for loop initially j = 1 and j <= 2 condition is 
 * Satisfied so printf() will execute and * will print in place of i[1] and j[1](first row and first column),
 * now j++ will happen and j = 2,Now again condition will check,Now 2 is not less than 2 but 2 is equal to 2 so condition is
 * satisfied again printf() function will execute and * will print in place of i[1] and j[2](first row and 
 * Second column).Now j will increment to 3, condition will check as 3 is not less than 2 and not equal to 2.
 * So it return FALSE,we will come out from nested for loop.
 * Here "i" will increment and become 2, and condition 
 * will check here i <= 2, 2 is not less than 2 but i is equal to 2, So condition is satisfied,again nested for
 * loop will execute.In nested for loop initially again j = 1 and again condition will check, j <= 2 condition is 
 * Satisfied so printf() will execute and * will print in place of i[2] and j[1](Second row and first column),
 * now j++ will happen and j = 2,Now again condition will check,Now 2 is not less than 2 but 2 is equal to 2 so 
 * condition is satisfied again printf() function will execute and * will print in place of i[2] and j[2](Second
 * row and Second column).Now j will increment to 3, condition will check as 3 is not less than 2 and not equal to 2.
 * So it return FALSE,we will come out from nested for loop.Here "i" will increment and become 3, and condition 
 * will check here i <= 2, 3 is not less than 2 and also i is not equal to 2 So condition is again FALSE.Now we will
 * come out from loop and program is completed successfully.Output of this program are four stars in form of 2d array
 * 2 columns and 2 rows.That is we want.            ***************/

/***************                     Similarly if we want to print stars of 4x4 2D array
 * we can do it easily by runing nested for loop, just change by number of rows and columns to 4.
 * As shown below! 
* for(i = 1; i <= 4; i++){
 *     for(j = 1; j <= 4; j++){
 *         printf("*");
 *     }
 * }                ***************/
int main(){
    /***************                     Now came on problem! Task-1
     * here we can easily print pyramid of stars through matrices.
     * when there is 4 rows pyramid then number of columns is 7.And when 3 rows pyramid there is 5 columns.
     * 3 rows of pyramid require 5 columns!
     * 4 rows of pyramid require 7 columns! 
     * 5 rows of pyramid require 9 columns! 
     * 6 rows of pyramid require 11 columns! 
     * we can easily observe a pattern, If there is n number of rows we need 2n-1 columns.
     * So here our first task completed,Means if main for loop run n numbers of rows then nested for loop
     * will run untill 2n-1 columns.So our for loop will be! 
     * for(i = 1; i <= n; i++){
     *     for(j = 1; j <= 2*n-1; j++){
     *         printf("*");
     *     }
     * }              ***************/

        /***************                     Now came on problem! Task-2
     * how to fill matrices boxes that looks like pyramid ?We don't have to fill all boxes of matrices.
     * we have to fill few of them to obtain pattern of pyramid.
     * let's try to understand it.
     * as we know if there is 4 rows then columns will be 7.So in 4x7 pyramid structure will be as below!
     * In first row there will be one star in 4th column,
     * In second row there will be three stars from 3rd to 5th columns,
     * In third row there will be five columns from second to sixth column,
     * In fourth row there will be seven columns from first to seven columns.
     * if carefully observe 4th column is nothing but n.
     * Then 3 is n - 1, and 5 is n + 1,
     * and 2 is n - 2, and 6 is n + 2,
     * and 1 is n - 3, and 7 is n + 3.
     * What we achieved here!
     * if(j >= n-(i-1) && j <= n+(i-1)){
     *     printf("*");
     * }
     * else{
     *     printf(""); 
     * }
     * Here i represents rows and j represent columns! n represents number of rows and columns.
     * Below is our final program!             ***************/
    int i, n, j;

    do{
        printf("Please! Enter number of rows you want in your pyramid or zero to go out of program:");
        scanf("%d", &n);
        for(i = 1; i <= n; i++){
            for(j = 1; j <= 2*n-1; j++){
                if(j >= n-(i-1) && j <= n+(i-1)){
                    printf("*");
                }
                else{
                    printf(" "); 
                }            
            }
            printf("\n");
        }
    }while(n != 0);
    printf("Opoose! You are out of program now!");
    return 0;
}

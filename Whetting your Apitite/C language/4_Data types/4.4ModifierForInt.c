/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.4                   ***************/



/***************                    Data Types                     ***************/
#include <stdio.h>
#include <limits.h>
int main(){
    /***************                    Integer Modifiers
     * Long and short
     * if integer is 4 bytes, By using short int maybe take 2 bytes        ***************/
    printf("The Size of Short int in my Computer: %d \n", sizeof(short int));
    /***************                    Integer Modifiers
     * Long and short
     * if integer is 4 bytes, By using long int maybe take 8 bytes 
     * But there is no garntee that short take less memory and
     * long take more memory Only thing that is garntee is
     * sizeof(short) <= sizeof(int) <= sizeof(long)       ***************/
     printf("The Size of long int in my Computer: %ld \n", sizeof(long int));

     /***************                   Important Notes
      * By Default int some_variable_name: is signed integer variable
      * Unsigned int some_variable_name; allows only positive values.
      * Here is some programming Examples  
      * This is Signed Integer range                   ***************/
     int var1 = INT_MIN;
     int var2 = INT_MAX;
     printf("The Range of signed integer is from : %d to %d \n",var1, var2);

     /***************                   Unsigned Integer range                    ***************/
     unsigned int var3 = 0;
    /***************    There is no symbolic expression is available in header file limits.h
     * for min value of unsigned integer Because Minimum value for all system is fixed 0 
     * %d is used to print decimal value while
     * %u is used to print unsigned decimal value                  ***************/

     unsigned int var4 = UINT_MAX;
     printf("The Range of signed integer is from : %u to %u \n",var3, var4);

     /***************                    Short signed integer range                    ***************/

     short int var5 = SHRT_MIN;
     short int var6 = SHRT_MAX;
     printf("The Range of signed short integer is from : %d to %d \n",var5, var6);

     /***************                    Short unsigned integer range
      * you can write Unsigned short or short unsigned
      * both are allowed.                    ***************/

     short unsigned int var7 = 0;
     unsigned short int var8 = USHRT_MAX;
     printf("The Range of Unsigned short integer is from : %u to %u \n",var7, var8);

     /***************                    long signed integer range                    ***************/

     long int var9 = LONG_MIN;
     long int var10 = LONG_MAX;
     printf("The Range of signed long integer is from : %ld to %ld \n",var9, var10);

     /***************                    long unsigned integer range
      * you can write Unsigned long or long unsigned
      * both are allowed.                    ***************/

     long unsigned int var11 = 0;
     unsigned long int var12 = ULONG_MAX;
     printf("The Range of Unsigned long integer is from : %lu to %lu \n",var11, var12);


          /***************                    long long signed integer range
           * if sizeof(long int) = 4 Bytes
           * then sizeof(long long int) = 8 Bytes
           * else
           * if sizeof(long int) = 8 Byte
           * then sizeof(long long int) = 8 Bytes                    ***************/

     long long int var13 = LONG_LONG_MIN;
     long long int var14 = LONG_LONG_MAX;
     printf("The Range of signed long long integer is from : %lld to %lld \n",var13, var14);

     /***************                    long long unsigned integer range
      * you can write Unsigned long long or long long unsigned
      * both are allowed.                    ***************/

     long long unsigned int var15 = 0;
     unsigned long long int var16 = ULONG_LONG_MAX;
     printf("The Range of Unsigned long long integer is from : %llu to %llu \n",var15, var16);

    return 0;



    /***************                    The Summary of Whole Programm
     * 1_sizeof(short) <= sizeof(int) <= sizeof(long).
     * 2_writting signed int_some_variable_name; is equivalent to writting
     * int_some_variable_name;.
     * 3_%d is used to print "Signed Integer".
     * 4_%u is used to print "Unsigned Integer". 
     * 5_%ld is used to print "long integer" equivalent to "Signed
     * long Integer".
     * 6_%lu is used to print "unsigned long Integer". 
     * 7_%lld is used to print "long long Integer".
     * 8_%llu is used to print "Unsigned long long Integer".                 ***************/
}

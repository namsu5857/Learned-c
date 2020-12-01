/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.4                   ***************/



/***************                    Data Types                     ***************/
#include <stdio.h>

int main(){
    /***************                    Float Data Type
     * float, Double and Long Double data type is used to representing fractional numbers for Example
     * 3.14, 0.678, 0.0000009 etc. 
     * Size
     * Float takes 4 Bytes => 32 Bits.
     * Double takes 8 Bytes => 64 Bits.
     * Long Double takes 12 Byte => 96 Bits.
     * Size of these data types totally depend upon your machine.
     * Float -> IEEE 754 Single precision floating point
     * Double -> IEEE 754 Double precision floating point 
     * Long Double -> Extended precision floating point
     * There is two type of fractional number representation
     * 1_ fixed 
     * 2_Floating point
     * 1_Fixed point representation
     * Example of Fixed point Representation
     * -9.99 here - is sign, 9 is integer and 99 is fraction
     * Minimum value = -9.99
     * Maximum value = +9.99
     * 2_Floating point
     * -+99 here - is sign +9 is exponent and 9 is Mantissa
     * Formula = (.M)*Base^Expo
     * Minimum value = -(0.9) * 10^9
     * Maximum value = +(0.9) * 10^9
     * in this type you can store a large number
     * Why there is different data types                      ***************/
    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;
    printf("%d \n", sizeof(float));
    printf("%d \n", sizeof(double));
    printf("%d \n", sizeof(long double));
    printf("%.16f \n", var1);
    printf("%.16lf \n", var2);
    printf("%.21Lf \n", var3);
/***************                    Another Example
 *                      ***************/  
    int var4 = 4/9;
    float var5 = 4/9;
    float var6 = 4.0/9.0;
    printf("%d \n", var4);
    printf("%f \n", var5);
    printf("%.2f \n", var6); 
    return 0;
}
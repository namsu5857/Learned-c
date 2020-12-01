/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.2                   ***************/



/***************                    Naming convention of variables                   ***************/
#include<stdio.h>
int main(){
    /*********    Rules for Name of Variables    ***********/
    /*********    Rule#1
     * Do not start variable name with digit 
     * int 1abc = 10; is not allowed  but between or at end digits are allowed    ***********/
    int _abc2 = 10;
    printf("%d \n", _abc2);
    /*********    Rule#2
     * Begining with underscore is valid variable name but not recommended 
     * for example            ***********/
    int _abc = 10;
    printf("%d \n", _abc);
    /*********    Rule#3
     * C language is case sensitive uppercase letter are different from lowercase letters 
     * for example      These are all different      ***********/
     int abc = 20;
    printf("%d \n", abc);  

    int Abc = 30;
    printf("%d \n", Abc);

    int aBc = 40;
    printf("%d \n", aBc); 

    int abC = 50;
    printf("%d \n", abC); 

    int ABC = 60;
    printf("%d \n", ABC); 

    /*********    Rule#4
     * Special Characters are not allowed for example(@,#,^,&,*,! etc) 
     *     int var@y;
     *     int var#six;
     *     int six^var;
     *     int abc*bca;
     *     int cba!def;
     * you can enter $ in between name this is allowed       ***********/


    int x$y = 101;
    printf("%d \n", x$y);



    /*********    Rule#5
     * White space or Blanks between name is not allowed
     * for example    int my name; not allowed      ***********/

    int my_name = 7234;
    printf("%d \n", my_name);


    /*********    Rule#6
     * Do not use keywords in your variable name.This is not allowed
     * for example    int, float, for, while, swith etc not allowed
     * if you want to use it you can use it by uppercase one or two letters      ***********/

    int FoR = 202;
    printf("%d \n", FoR);

        /*********    Do not use too long name of variable      ***********/


   

   return 0; 

}
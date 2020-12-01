/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.2                   ***************/



/***************                    Modifieres of variables                   ***************/
#include <stdio.h>

int b;  //Global Variable
int main(){
    /***************   What is Auto Modifier
     * Auto means Automatic
     * variable declare inside a scope by default are automatic variables
     * syntax  auto int some_variable_name;
     * Auto variable are automatically destroyed after completion of function(Scope) in which 
     * it is defined for example as shown below!                  ***************/
     int var = 10; //This is same as auto int var = 10;
     /***************   Benifit of automatic variables
      * They do not waste memory! As complete function or scope they destroy automatically
      * Means memory allocated to this variable will deallocate and this memory can used
      * for some other operations                  ***************/

     /***************   Take aways
      * 1 If you won't initialize auto variable, by default it will be initialized
      * with some garbage(Random) value let see with example                ***************/
     int a;
     printf("%d \n", a);

     /***************   Take aways
      * 2 On other hand,Global variable by default initialized to 0
      * value i declare b variable that is global variable let see its value by printing it
      * here                ***************/
     printf("%d \n", b); //Result is as expected 0
     return 0;
}
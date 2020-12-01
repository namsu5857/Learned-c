/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************                      Problem: 3                    ***************/
/***************        Problem related To Functions 
 * Read carefully and we have to tell what will print on screen ?      ***************/
#include <stdio.h>
int fun(){
    /***************                   Solution  
     * Here we declare a static int num variable.That means after completing this function
     * variable will not destroy.This value will remained.                 ***************/
    static int num = 16;
    return num--;
}
int main(){

    /***************                   Solution:
     * In main function we are runing for loop only.
     * In for loop as we know first step is initialization but here we are calling fun function
     * as second step is condition checking but here also we are calling fun function.Third step 
     * is increment/decrement but here also we are calling function fun.
     * As for loop will start fun function is calling, Therefore control will be transfered from 
     * calling procedure to called function.
     * In fun function we have: static int num variable that value is 16.Next line we are decrement
     * the num variable.But here is post decrement(means first value will return then decrement will
     * happen).Therefore 16 return back to for loop(Inplace of Initialization step).Then decrement will
     * happen and num = 15 now! And for loop will look like this.
     * for(16; fun(); fun())
     * printf("%d", fun()); 
     * Second step of for loop is condition checking.
     * In condition checking step fun function will call as above first value will return then decrement 
     * will happen. So for loop will look like this! and value of num = 14 now! 
     * for(16; 15; fun())
     * printf("%d", fun()); 
     * After this condition is satisfied so printf function will evaluate.In printf function we are calling
     * fun function again.Now for loop will look like this!
     * for(16; 15; fun())
     * printf("%d", 14);
     * 14 will print on screen and num = 13 now!
     * Third step of for loop increment/decrement will execute.Here also fun function will call now for loop 
     * will look like this!
     * for(16; 15; 13)
     * printf("%d", 14); 
     * and now num = 12.
     * Now these steps will execute again as below!
     * for(12; 11; fun())
     * printf("%d", 11);
     * 11 will print on screen and for loop will look like this!
     * for(12; 11; 10)
     * printf("%d", 11);  
     * Now these steps will execute again as below!
     * for(9; 8; fun())
     * printf("%d", 8);
     * 8 will print on screen and for loop will look like this!
     * for(9; 8; 7)
     * printf("%d", 8); 
     * Now these steps will execute again as below!
     * for(6; 5; fun())
     * printf("%d", 5)
     * 5 will print on screen and for loop will look like this!
     * for(6; 5; 4)
     * printf("%d", 5);
     * Now these steps will execute again as below!
     * for(3; 2; fun())
     * printf("%d", 2);
     * 2 will print on screen and for loop will look like this!
     * for(3; 2; 1)
     * printf("%d", 2);
     * Now these steps will execute again as below!
     * for(0; 0; fun())
     * printf("%d", fun());
     * Here condition is FALSE so we will come out from loop and Final output will be!
     * 14 11 8 5 2             ***************/
    for(fun(); fun(); fun())
    printf("%d", fun());
    
    return 0;
}
   
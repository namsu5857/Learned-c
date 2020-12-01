/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.6                   ***************/
/***************                      Conditions                    ***************/



/***************          Introduction To Switch Conditions         ***************/
#include <stdio.h>
#define y 2
#define z 3
int main(){
    /***************                  what is switch      
     * Switch is a great replacement to long else if constructs.For Example!
     * int x = 2;
     * if(x == 1)
     *     printf("x is 1");
     * else if(x == 2)
     *     printf(" x is 2");  
     * if(x == 3)
     *     printf("x is 3");
     * else 
     *     printf(" x is a number other than 1, 2, 3");  
     * So write these type many if else construct many time is tidy task.So switch is 
     * replacement of it.                          ***************/
    int x = 2;
    switch(x){
        case1: printf("x is 1 \n");
        break;
        case2: printf("x is 2 \n");
        break;
        case3: printf("x is 3 \n");
        break;
        default: printf(" x is a number other than 1, 2, 3 \n");
        break;
    }
    /***************  let understand switch condition.
     *     int x = 2;
     * switch(x){
     *    case1: printf("x is 1");
     *    break;
     *    case2: printf("x is 2");
     *    break;
     *    case3: printf("x is 3");
     *    break;
     *    default: printf(" x is a number other than 1, 2, 3");
     *   break;
     * }
     * In case1(level 1) it will check that x == 1 or not.Actually cases are compare values with variable value.
     * So if x == 1 it will print statement "x is 1" and due to break you will come out from loop. else it will check 
     * next case if x == 2 or not if condition is satisfied it will print "x is 2" and loop will terminate due to break. else it will
     * continue check the condition untill reached default.Default will print if none of levels(cases) is matched(satisfied)
     *  then default will print and through break switch loop will finish.
     * Default is optional.It is not necessery to write.
     * Suppose x == 1 condition is satisfied and there is no break after printf then subsequent expression will also
     * evaluated untill we reach the next break.                                     ***************/


    /***************          Some Important Facts about switch
     * 1_ You are not allowed to add duplicate cases.
     * for example...
     *     int x = 2;
     * switch(x){
     *    case1: printf("x is 1");
     *    break;
     *    case1: printf("x is 2");
     *    break;
     *    case3: printf("x is 3");
     *    break;
     *    default: printf(" x is a number other than 1, 2, 3");
     *   break;
     * }   
     * In above code we duplicate the case1 so it will produce error "Duplicate case value"So avoid duplicate cases.
     * 2_Only those expressions are allowed in switch which result is an integral constant.
     * As Example given below...  
     * 3_ Float value is not allowed as a constant value in case label.Only integer constants/constant expression are
     * allowed in case label.
     * As Example given below...  
     * float x = 2.15;
     * switch(x){
     *    case3.14: printf("Choice is 1");
     *    break;
     *    case2.01: printf("Choice is 2");
     *    break;
     *    default: printf(" Default ");
     *   break;
     * }  
     * It will produce error "case label does not reduce to an integer constant".
     * This is not allowed... 
     * Onother hand if you put expression in case labels that is fine. it is allowed.
     * As Example given below... 
     * 4_Variable expression are not allowed in case labels. Although macros are allowed.
     * As given Example below...
     * int x = 2, y = 3, z = 10;
     * switch(x){
     *    casex: printf("Choice is 1");
     *    break;
     *    case2y: printf("Choice is 2");
     *    break;
     *    default: printf(" Default ");
     *   break;
     * }
     * This is not allowed...
     * This program will produce error " Case label does not reduce to an integer constant".
     * Although macros are allowed... 
     * 5_ "default" can place anywhere inside switch.it will still get evaluated if no match is found. ***************/
      int a = 2, b = 5, c = 10;
    switch(a + b * c){
        case4: printf("Choice is 1 \n");
        break;
        case5: printf("Choice is 2 \n");
        break;
        default: printf(" Default  \n");
        break;
    }
    /***************          In above code there is a + b + c is integral constant so
     * it will check cases no error will generate it is allowed.
     * Hence there is no case satisfied so default will print. 
     * On other hand in below code i declare float data type.
     * float x = 2.15, y = 3.44, z = 10.2;
     * switch(x + y * z){
     *    case1: printf("Choice is 1");
     *    break;
     *    case2: printf("Choice is 2");
     *    break;
     *    default: printf(" Default ");
     *   break;
     * }    
     * In the above code the expression is not a integral constant so it will produce error.
     * Because This is not allowed."switch quantity is not an integer".    ***************/
    
    int var = 23;
    switch(var){
        case 5+10: printf("Choice is 1 \n");
        break;
        case 3 + 2*3: printf("Choice is 2 \n");
        break;
        default: printf(" Default \n");
        break;
    }
    /***************          Macros are allowed as a case labels
     * As given below...
     * Hence it will produce output        ***************/
    int var1 = 2;
    switch(var1){
        case y: printf(" Number is 2 \n");
        break;
        case z: printf("Number is 23 \n");
        break;
        default: printf(" Default case! \n");
        break;
    }
    /***************          Default will evaluated still if you put it anywhere in Switch Condition
     * if there is no match found...         ***************/
    int var2 = 5;
    switch(var2){
        case 6: printf("Number is 2222 \n");
        break;
        default: printf(" Default case because No case match! \n");
        break;
        case 7: printf("Number is 333 \n");
        break;

    }

    return 0;
}
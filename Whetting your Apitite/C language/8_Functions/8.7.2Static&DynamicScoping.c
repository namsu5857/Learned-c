/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************  Introduction To Static and dynamic scoping of Functions   ***************/
#include <stdio.h>
int fun1(int);
int fun2(int);
int a = 5;
int main(){  
    /***************              Dynamic Scoping:
     * In dynamic scoping, definition of a variable is resolved by searching its containing 
     * block and if not found then searching its calling function if still not found then function
     * which called that calling function will be searched and so on.  ***************/
    int a = 10;
    a = fun1(a);
    printf("%d", a);
    return 0;
}
/***************               For Example:
     * In this given program if we use dynamic scoping then output will be 30.Because!
     * as we know that b = 20 in fun2 but a is not in fun2 so it will be searched in its calling function
     * fun1 there is also not found so now it will searched in calling of fun1 that is main function.As in 
     * main function a = 10 so in fun2 c = 10 + 20 that is 30.
     * So answer will be 30 by dynamic scoping and answer 25 by static scoping as previously discuss.   ***************/
int fun1(int b){
    b = b + 10;
    b = fun2(b);
    return b;
}
int fun2(int b){
    int c;
    c = a + b;
    return c;
}



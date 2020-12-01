/***************               Whetting Your Apitite                ***************/
/***************                     C Language                     ***************/
/***************                     Chapter No.8                   ***************/
/***************                      Functions                     ***************/



/***************                      Problem: 4                    ***************/
/***************        Problem related To Static and Dynamic Scoping 
 * Read the code carefully and we have to tell what will print on screen ?      ***************/
#include <stdio.h>
int a, b;
void print(){
    printf("%d %d", a,b);
}
int fun1(){
    int a, c;
    a = 0, b = 1, c = 2;
    return c;
}
void fun2(){
    int b;
    a = 3; b = 4;
    print();
}
int main(){

    /***************                   Solution:
     *          ***************/
    a = fun1();
    fun2();
    
    return 0;
}
   
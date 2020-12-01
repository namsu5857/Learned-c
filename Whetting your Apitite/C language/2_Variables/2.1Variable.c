/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.2                   ***************/



/***************                    variables                     ***************/
#include<stdio.h>

int main(){
    int var;    //This is declaration of variable var
    var = 10;  //This is definition of variable var
    /**********   if declaration and definition of variable are done at same time   **********/
    /**********            this is called initialization.as shown under             **********/
    int a = 5;
    printf("%d \n", a);
    /**********   In above int is Data type and a is name of variable and 5 is      **********/
    /**********   value assign to a variable.it does not means we can not change    **********/
    /**********   value of variable we can change value anytime.as shown under      **********/
    a = 25;
    /**********   Here we are not write int because declaration is done only one    **********/
    /**********   time then we can use this variable multiple time if we write      **********/
    /**********   again declaration of same variable it is illegal.we can not do    **********/
    /**********   it at same place we can do it in different block of code but we   **********/
    /**********   will study it later in scope of variables                         **********/
    printf("%d \n", var);
    printf("%d \n", a);
    /**********   We can assign a variable to a variable as shown under             **********/
    int b;
    b = a;
    printf("%d \n", b);
    /**********   we can also assign same value to different variables              **********/
    int d,e,f;
    d = e = f = 4;
    printf("%d \n", d);
    printf("%d \n", e);
    printf("%d \n", f);
    return 0;
}

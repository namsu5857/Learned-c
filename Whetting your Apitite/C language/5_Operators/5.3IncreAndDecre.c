/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/

#include <stdio.h>

int main(){
    /***************             Increment/Decrement Operators
     * Increment Operator is used to increment the value of variable by one.
     * Similarly, Decrement Operator is used to decrement the value of a variable
     * by one. as shown below!              ***************/
    int a = 5;
    a++;
    printf("The value of a after increment %d \n", a);
    int b = 10;
    b--;
    printf("The value of b after decrement %d \n", b);
    /***************           What is means by a++ or a--
     * a++ is same as a = a + 1; and
     * a-- is same as a = a - 1;              ***************/

    /***************             Important points
     * 1_Both are unary operators.
     * It means they required only one operand for operation,They are apply on single oprand.
     * as you see a++ there is only one operand if you write a++a This is wrong statement.Same
     * for a--.  
     * 2_You can not use rvalue before or after increment/decrement operator.
     * for example (a + b)++; or ++(a + b); This will produce error Because a + b is rvalue
     * so you can not perform this action.
     * a++ means a = a + 1; here a is variable and you are increment it by 1 and then assign to a variable
     * this is allowed.
     * But (a + b)++ means to (a + b) = (a + b) + 1 here you are increment and expression by one (a + b) + 1
     * This is fine but you are assigning it to expression (a + b) this is not allowed because this is not a
     * variable.it is only expression             ***************/


    /***************             What is lvalue and rvalue
     * lvalue
     * or you can say left value simply means an object that has an identifiable location in
     * memory(i.e having an address).
     * In any assignment lvalue must have capability to hold the data.
     * lvalue must be a variable because they have capibility to store the data.
     * lvalue can not be a function, expression like(a + b, etc) or a constant like(3.14, etc).
     * RValue
     * or you can say right value simply mean an object that has no identifiable location
     * in memory.
     * Anything which capable of returning constant expression or value.
     * Expression like a + b will return some constant value.   ***************/


    /***************             Types of increment/Decrement Operators
     * There are two types of increment operators.
     * 1_Pre Increment Operator.
     * First increment and then assignment done(++a).
     * 2_Post Increment Operators.
     * First assignment done and then increment happend (a++).
     * There are two types of Deccrement operators also.
     * 1_Pre Decrement Operator.
     * First Decrement and then assignment done(--a).
     * 2_Post Decrement Operators.
     * First assignment done and then Decrement happend (a--).                ***************/
    return 0;
}
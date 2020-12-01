/***************               Whetting Your Apitite               ***************/
/***************                     C Language                    ***************/
/***************                     Chapter No.5                  ***************/
/***************                      Operators                    ***************/



#include <stdio.h>

int main(){
    /***************             Increment/Decrement Operators
     * Token Generation.
     * In Compilation process there are many phase!
     * Lexical analysis is the first phase in the compilation process.
     * lexical analysis is performed by lexical analyzer.Lexical analyzer(scanner)
     * scans the whole source program and when it finds the meaningful sequence of
     * characters(lexemes).Then it convert it into a token.
     * Token:lexemes mapped into token-name and attribute-value.
     * Example:  int -> <keyword, int>.
     * It always matches the longest character sequence.
     * lexical analyzer job is to find meaningful sequence of Characters.
     * let see how!
     * int a = 5; lexical analyzer first scan int this is meaningfull so analyzer
     * will generate a separte token for it as keyword |int| Token is nothing but a
     * container. Next analyzer will scan a blank space and then find a that is variable
     * name.Analyzer will generate a separte token for it as identifier or variable name
     * |a| next is assignment operator = analyzer will generater separte token for it |=|
     * next is constant value 5 fro this analyzer will also generate a seprate token |5|
     * next is simicolon ; that is termination of line for this analyzer will also generate
     * a separte token for it |;|
     * This is behaviour of lexical analyzer.How actually work now its not need to know!
     * Because This is part of compiler designing But here we are studying C language Only!
     *                ***************/
    int a = 5, b = 4;
    printf("%d \n", a+++b);
    /*************** As we discuss above Token generation,In above line lexical analyzer will
     * generate token.first of all it will scan a and then + so a+ is no meaningful character
     * So analyzer will generate only token of a as |a| then scan next here + is meaningfull 
     * but next is again + so ++ is meaningfull but +++ is not so lexical analyzer will generat
     * a token for ++ as |++| next again + operator and next is b so +b is not meaningful for both
     * analyzer will generate separte tokens as |+| and |b|.Now it will become.
     * |a| |++| |+| |b|
     * As we know ++ is unary operator and need only one operand that is "a" available and next is addition
     * operator(+) that need two operands one is "a++" and second is "b" so addition will happen.
     *  Here first of all a++ means first a will assignment(Here will use in equation) and then increment 
     * will happen So a++ will be 5 and then 5 + b Here put value of b that is 4 => 5 + 4
     * => 9 So answer will be 9                    ***************/
    /***************             Now What will be value of this
     * statement as above discussion                 ***************/
    int x = 5, y = 4;
    printf("%d \n", x + ++y);
    /***************             As we discuss above So 
     * lexical analyzer will generate tokens for this also as
     * first of all "x" variable token will generate because after a is blank space and then addition operator
     * so first token will |x| then another token for addition operator(+) only because next is blank space and then
     * "+" So Only |+| token will generate and next is for ++y token will generate as |++y|
     * finally it will be...
     * |x| |+| |++y| 
     * as we know x = 5 + ++y, ++y means first increment then assignment(Use in Equation) happen
     * so it will be y = 5,And "+" is Binery Operator so it required two oprand one is a and second is ++y
     * So finally it will be 5 + 5 => 10
     * The Answer will be 10              ***************/

    /***************             Now What will be value of this
     * statement.You can also relate this as above "i++" one token, "+" is second token and "++j" is 
     * third token finally it will be as
     * 5 + 5 => 10 Answer will be 10             ***************/
    int i = 5, j = 4;
    printf("%d \n", i++ + ++j);
    return 0;
}
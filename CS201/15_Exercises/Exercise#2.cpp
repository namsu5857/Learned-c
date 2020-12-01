/******************************   Introduction to Programming       ******************************/
/******************************               CS201                 ******************************/
/******************************            Lecture #4               ******************************/


/******************************            Exercise #2 in C/c++
 * In this exercise.Given a four digit integer, Seprate and print the digit on screen.              ******************************/
#include <iostream>
using namespace std; 


main(){
	/**********    Solution: 
     * Let suppose we have a four digit number 1234.
	 * We have to seprate their digits and also print on screen.
	 * As if we divide given number by 10 and save remainder.Thus we achieve the last digit of the given number.
	 * Now if we divide given number by 10(Integer division) thus we achieve the number except last digit.Again
	 * we repeat above process untill we seprate all digit and print on screen.
	 * For this purpose we will use Modulus(%) operator.    **********/
    int Number, digit;
	/**********   
     * Here we are asking users to enter a four digit number and store it in variable number   **********/
	cout<<"Please Enter the four digit Number: ";
	cin>> Number;
	
/**********   
     * Here we are dividing number by 10 through modulus(%) Operator.And store remainder(last digit) in variable digit
	 * And finally print on screen and drop last digit of Number.    **********/
     digit = Number%10;
     cout<<"The first digit of given Number is: " << digit << '\n';
     Number = Number/10;
     digit = Number%10;
     cout<<"The Second digit of given Number is: " << digit << '\n';
     Number = Number/10;
     digit = Number%10;
     cout<<"The Third digit of given Number is: " << digit << '\n';
     Number = Number/10;
     digit = Number%10;
     cout<<"The fourth digit of given Number is: " << digit << '\n';

}


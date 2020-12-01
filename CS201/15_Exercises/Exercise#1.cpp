/******************************   Introduction to Programming       ******************************/
/******************************               CS201                 ******************************/
/******************************            Lecture #4               ******************************/


/******************************            Exercise #1 in C/c++
 * In this exercise we are trying to know how average of 10 students calculate ?              ******************************/
#include <iostream>
using namespace std; 

/**********   
 *   **********/

main(){
	/**********   
     * Here we declare 10 variables for asking users to enter their ages.from age1 to age10.
	 * Next line we are declare two more variables one for TotalAge and second for AverageAge
	 * for calculations.    **********/
    int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
    int TotalAge, AverageAge;
	/**********   
     * Here we are asking users to enter their values and store them in variables from age1 to age10    **********/
	cout<<"Please Enter the age of Student 1: ";
	cin>> age1;
	cout<<"Please Enter the age of Student 2: ";
	cin>> age2;
	cout<<"Please Enter the age of Student 3: ";
	cin>> age3;
	cout<<"Please Enter the age of Student 4: ";
	cin>> age4;
	cout<<"Please Enter the age of Student 5: ";
	cin>> age5;
	cout<<"Please Enter the age of Student 6: ";
	cin>> age6;
	cout<<"Please Enter the age of Student 7: ";
	cin>> age7;
	cout<<"Please Enter the age of Student 8: ";
	cin>> age8;
	cout<<"Please Enter the age of Student 9: ";
	cin>> age9;
	cout<<"Please Enter the age of Student 10: ";
	cin>> age10;
/**********   
     * Here we are calculating total age of 10 students by add them. Addition will start from Right hand side
	 * First age1 and age2 will be add and then add in age3 and so on.By adding all result will assign to TotalAge.    **********/
     TotalAge = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10;
	/**********   
     * Here we are calculating average age of students by totalage/number of students.
	 * This is integer division(TRest part will truncate.
	 * IMPORTANT: Avoid dividing by 0 otherwise it will produce Runtime Error.    **********/
     AverageAge = TotalAge/10;
	/**********   
     * Here we are Printing calculated avarage age of students.
	 * We can write cout lines as below as we want.    **********/   
     cout<< "The average age of class:"
         << AverageAge;
	
}


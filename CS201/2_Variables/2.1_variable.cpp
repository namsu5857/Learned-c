/******************************   Introduction to Programming       ******************************/
/******************************               CS201                 ******************************/
/******************************            Lecture #3               ******************************/


/******************************            variable in C/c++
 * Variable is like a bucket or container of memory where we store our data.
 * Variable is the name of a location in the memory.
 * In a program a variable has:
 * 1_ Name.
 * 2_ Type.
 * 3_ Size.
 * 4_ Value.  
 * Variable will always on LHS of assignment operator. 
 * As a variable name we can not use keywords of c that are 32.          ******************************/
#include <iostream> 
using namespace std;




/**********   Declaration of Variables
 * if we write data type of variable and name of variable this means declaration of variable. for example "int a;"
 * This is declaration of variable.You can not use a variable unless you declare it.     **********/
main(){
	int a;
	/******************************            Declaration.
	 * Below we declare three variables x, y, z.These are on three different lines we can declare them on a single line also
	 * with help of comma seprator(,). for example int x, y, z; This is same as below write.We can also write int x; int y; int z;
	 * But this is not recomended.                ******************************/
	int x;
    int y;
    int z;
    /******************************             Assignment.
	 * Now we will assign the value to these declared variables.               ******************************/
	x = 10;
	y = 20;
	z = x + y;
    /******************************             Printing the Data.
	 * Now we will print the value of above assigned variables.               ******************************/
	cout<< "x = ";
	cout<< x;
	
	cout<< "y = ";
	cout<< y;

	cout<< "z = x + y ";
	cout<< z;
}


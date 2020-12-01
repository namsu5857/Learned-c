/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.2                   ***************/



/***************                   Extern Modifieres of variables                   ***************/

#include <stdio.h>

extern int a;
extern int a;
extern int a;
/***************     Here we are not initialize any value but it tell us
* value that initialized in other.c file     
* You can declare multiple time to it by writing extern keyword in front of it
* Multiple declaration is allowed but multiple definition is not allowed its means if you write
* int a;
* int a;
* int a;
* This is not allowed             ***************/
int main() {
	/***************      When we print extern variable compiler
	* first of all check in that scope and if found then print
	* Otherwise it goes outside of this function if then also not
	* found then check in an other file if found print else produce error                  ***************/
	printf("%d \n", a);
	
	
	/***************                   Some takeaways for Extern Modifieres of variables
	* 1 when we write Extern some_data_type some_variable_name No memory is allocated,Only property 
	* of variable is announced 
	* 2 Multiple declaration of etern variable is allowed within the file.This is not the case 
	* With automatic variables
	* 3 Extern variable says to compiler "go outside from my scope and you will find the definition 
	* of the variable that i declared".
	* 4 Compiler believe that whatever the extern variable said is true and produce no error.
	* Linker throws error when he finds no such variable exist.
	* 5 When an extra variable is initialized then memory for this variable is allocated and 
	* it will considered defined.                 ***************/
	return 0;
}

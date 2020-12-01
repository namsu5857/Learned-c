/***************               Whetting Your Apitite               ***************/
/***************                    Chapter No.2                   ***************/



/***************                   Static variables                   ***************/



#include <stdio.h>

int main() {
	int value;
	value = increment();
	value = increment();
	value = increment();
	
	printf("%d \n", value);
	return 0;
	
	/***************  You can not assign variable or Function to a Static variable! Only you can assign constant integer
	               *  1_static variable remains in memory even if it is declared in block on the other hand automatic variable 
				   *  is destroyed after the completion of function in which it was declared.
				   *  2_Static variable if declared outside the scope of any function will act like global variable but within 
				   *  only that file in which it is declared.
				   *  3_You can only assign a constant litral(or value) to a static variable    ***************/
	
}

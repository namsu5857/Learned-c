#include <stdio.h>
#include <stdlib.h>

/********************     This is definition of function fun and multiply      ********************/
int fun(int, int);
int multiply(int, int);
int main() {
	/********************     Here we are calling function fun that define in file1.c      ********************/
	int sum = fun(3, 5);
	printf("The sum of two values is: %d", sum);
	
	/********************     Here we are calling function multiply that define in file2.c 
	 * This is static function that can not access this main file. it will produce error.     ********************/
	int mult = multiply(3, 5);
	printf("The Multiplication of two values is: %d", mult);
	return 0;
}

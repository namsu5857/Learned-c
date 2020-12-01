//static int count;
                   /********** This is static variable this is only accessible in this file.  
                   * you can not access in other file it will produce error.  
				   * But variable is still global in this file not other file.
				   * Here value of variable will be initialized 0 **********/
//int count; This is accessible in all files of this project so it is called Global variable
int increment(){
	//int count = 0; This is only visible in this function so it is called local variable
	 static int count; /********** if you write this.This is also retain previous value
	                   * but this is local variable.you can not access outside of this function
	                   * This variable will assign some garbage value to it This variable will not destroy
	                   * This is beauty of Static variable. **********/
	count = count + 1;
	return count;
}

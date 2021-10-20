/* 
	if (test):
		if (testa):
			do something
		else: 
			do something
	else if (test1):
		do something
	else if (test2):
		do something
	else: 
*/		




#include <stdio.h>

int main(){
	
	int input, get;
	
	printf("Enter an integer: \n");
	get = scanf("%d", &input)?printf("You typed an integer"):printf("You did not type an integer");
	
	/*
	if (input != 123){
		
		if (input < 123){
			printf("%d is less than 123.\n", input);
		} else {
			printf("%d is greater than 123", input);
		}
		
	} else{
		printf("%d is equal to 123\n", input);
	}
	*/
	
	
	
	
	
	
	return 0;
}

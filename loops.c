/*
	loop: while, for, do-while
*/


#include <stdio.h>
#include <string.h>

int main(){
	
	char str[15] = "woieihihisi";
	int i ;
	
	//printf("%s", str);
	//printf("length = %d", strlen(str));
	
	
	/* while (i < strlen(str)){
			
		printf("%c\n", str[i]);
		i += 1;
		
	}
	*/
	
	/*
	for (i = 0; i < strlen(str); i++){
		printf("%c\n", str[i]);
	}
	*/
	
	
	do {
		printf("%c\n", str[i]);
		i += 1;
	} while (i < strlen(str));
	
	
	
	return 0;
}

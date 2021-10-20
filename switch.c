/*
	switcch statement:
	
	switch (something){
		
		case 'order':
			do something
			break;
		case 'a':
			do something
			break;
		defualt:
			do something
			break;
		
	}
*/


#include <stdio.h>

int main(){
	
	int ch;
	
	printf("Make your choice: a (pizza), b (yogurt), c (coke), d (water)\n Q or q to quit:\n");
	scanf("%c", &ch);
	
	while (ch != 'q' && ch != 'Q'){
		
		switch (ch){
		
			case 'a': //if (ch == 'a')
				printf("You chose pizza.\n");
				break;
			
			case 'b':
				printf("You chose yogurt.\n");
				break;
			
			case 'c':
				printf("You chose coke.\n");
				break;
			
			case 'd':
				printf("You chose water.\n");
				break;
			
			default: 
				printf("Invalid choice!");
				break;
		}
	
		scanf("%c", &ch);
		if (ch == 'q' && ch == 'Q'){
			break;
		}
		getchar();
	}
	

	return 0;
}

#include <stdio.h>
#define SIZE 10


int main(){
	
	int ar[SIZE] = {2, 3, 6, 1, 4, 5};
	int i;
	int* ptr;
	
	// ar[] = &ar;
	
	ptr = ar;
	
	
	for(i = 0; i < SIZE; i++){
		
		printf("ar[%d] = %d\n", i, ar[i]);
	}
	
	printf("\n\n");
	
	for(i = 0; i < SIZE; i++){
		
		printf("ar[%d] = %d\n", i, *(ptr + i));
	}

	
	
	
	
	
	
	return 0;
}

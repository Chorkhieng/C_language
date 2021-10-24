#include <stdio.h>
#define ROW 5
#define COLS 6

int main(){
	
	int ar[ROW][COLS] = {{2, 3, 6, 1, 4, 5},
						 {3, 4, 2, 1, 13,2},
						 {2, 3, 5, 2, 2, 1},
						 {0, 2, 1, 13, 34, 1}};
	int row, column;
	//int* ptr;
	
	// ar[] = &ar;
	
	//ptr = ar;
	
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			printf("ar[%d][%d] = %d\n", row, column, ar[row][column]);
		}
		
		printf("\n\n");	
	}
	
	//printf("\n\n");
	
	
	
	return 0;
}

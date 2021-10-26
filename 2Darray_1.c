#include <stdio.h>
#define ROW 5
#define COLS 6

void printElem(int [*][COLS]);
void sumRow(int [*][*]);
void sumColumn(int [*][*]);
void sumAll(int [*][*]);

int main(){
	
	int ar[ROW][COLS] = {{2, 3, 6, 1, 4, 5},
						 {3, 4, 2, 1, 13,2},
						 {2, 3, 5, 2, 2, 1},
						 {0, 2, 1, 13, 34, 1}};
						 
						 
	printElem(ar);
	sumRow(ar);
	sumColumn(ar);
	sumAll(ar);
						 
	/*
	int row, column;
	int (*ptr)[COLS];
	
	ptr = ar;
	
	printf("Array notation:\n");
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			printf("ar[%d][%d] = %d\n", row, column, ar[row][column]);
		}
		
		printf("\n\n");	
	}


	printf("Pointer notation:\n");
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			printf("ar[%d][%d] = %d\n", row, column, *(*(ptr + row) + column));
		}
		
		printf("\n\n");	
	}
*/

	return 0;
	
}

// function definition	
void printElem(int ar1[][COLS])
{
	
	int row, column;
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			printf("ar[%d][%d] = %d\n", row, column, ar1[row][column]);
		}
		
		printf("\n\n");	
	}
}

void sumRow(int ar1[][COLS])
{
	
	int row, column, sum;
	
	printf("\n Sum in each row: \n");
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			
			sum += ar1[row][column];
			printf(" %3d ", ar1[row][column]);
		}
		
		printf(" = %d\n", sum);
		sum = 0;	
	}
}

void sumColumn(int ar1[][COLS])
{
	
	int row, column, sum;
	
	printf("\n Sum in each column: \n");
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			
			printf(" %3d ", ar1[row][column]);
		}
		
		printf("\n");	
	}
	
	printf("\n\n");
	
	for(row = 0; row < COLS; row++){
		for(column = 0; column < ROW; column++){
			
			sum += ar1[column][row];
		}
		
		printf(" %3d ", sum);
		sum = 0;	
	}
}

void sumAll(int ar1[][COLS])
{
	int row, column, sum;
	
	printf("\n Sum of all elements: \n");
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			
			sum += ar1[row][column];
		}		
	}
	
	printf(" = %d\n", sum);
}

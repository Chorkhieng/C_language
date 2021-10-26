#include <stdio.h>
#define ROW 5
#define COLS 6

void print2D(int [*][*]);
void print2DPointer(int [*][*]);
void sumRow(int [*][*]);
void sumColumn(int [*][*]);
void totalSum(int [*][*]);

int main(){
	
	int ar[ROW][COLS] = {{2, 3, 6, 1, 4, 5},
						 {3, 4, 2, 1, 13,2},
						 {2, 3, 5, 2, 2, 1},
						 {0, 2, 1, 13, 34, 1},
						 {1, 4, 34, 45, 65, 23}};
	
	print2D(ar);         // print array
	print2DPointer(ar);  // print array using pointer
	sumRow(ar);          // print the sum of elements in each row of the array
	sumColumn(ar);	     // print the sum of elements in each column of the array
	totalSum(ar);        // print the sum of all elements in the array
		
	
	return 0;
}

void print2D(int arr[][COLS])
{
	
	int row, column;
	
	printf("Print array using array notation:\n\n");
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			printf("ar[%d][%d] = %-3d    ", row, column, arr[row][column]);
		}
		
		
		
		printf("\n\n");	
	}
	
}

void print2DPointer(int arr[][COLS])
{
	
	int row, column;
	int (*ptr)[COLS] = arr;
	
	printf("Print array using pointer notation:\n\n");
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			printf("ar[%d][%d] = %-3d    ", row, column, *(*(ptr + row) + column));
		}
		
		printf("\n\n");	
	}
	
}

void sumRow(int arr[][COLS])
{
	
	int row, column, sum;
	
	printf("Print the total of the sum in each row: \n\n");
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			
			sum += arr[row][column];
			printf(" %3d", arr[row][column]);
		}
		
		printf("  = %3d\n", sum);
		sum = 0;	
	}
	
}

void sumColumn(int arr[][COLS])
{
	
	int row, column, sum;
	
	printf("Print the total of the sum in each column: \n\n");
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			printf(" %3d", arr[row][column]);
		}

		printf("\n");	
	}
	
	printf("\n");
	
	for(row = 0; row < COLS; row++){	
		for(column = 0; column < ROW; column++){
			
			sum += arr[column][row];
		}
			
		printf(" %3d", sum);	
		sum = 0;
	}
}

void totalSum(int arr[][COLS])
{
	int row, column, sum;
	
	for(row = 0; row < ROW; row++){
		for(column = 0; column < COLS; column++){
			
			sum += arr[row][column];
		}
	}
	
	printf("\n\nThe total of all elements is: %3d\n", sum);
}


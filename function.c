
void printNumbers(int, int);

#include <stdio.h>

int main(){
	
	int num1, num2;
	
	printf("Enter two integers that indicate lower and upper: \n");
	scanf("%d%d", &num1, &num2);
	
	printf("Print number from %d to %d: \n", num1, num2);
	printNumbers(num1, num2);
	
	return 0;
}

// function definition
void printNumbers(int a, int b)
{
	int i;
	
	for (i = a; i <= b; i++){
		
		printf("%d  ", i);
	}
}

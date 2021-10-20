#include <stdio.h>

int main(){
	
	int a = 5, b = 9, temp = 354;
	
	int* ptr;
	int* ptr1;
	int* ptr2;
	
	ptr = &a;
	ptr1 = &b;
	ptr2 = &temp;
	
	printf("a = %d  at address: %p\n", *ptr, ptr);
	printf("b = %d  at address: %p\n", *ptr1, ptr1);
	printf("temp = %d  at address: %p\n", *ptr2, ptr2);
	
	printf("a = %d  at address: %p\n", a, &a);
	printf("b = %d  at address: %p\n", b, &b);
	printf("temp = %d  at address: %p\n", temp, &temp);
	
	
	return 0;
}



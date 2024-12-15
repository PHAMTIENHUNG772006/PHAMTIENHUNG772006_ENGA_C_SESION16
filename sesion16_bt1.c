#include<stdio.h>
int main(){
	int *a = 10;
	int *ptr = a;
	int b = 20;
	int *ptr1 = b;
	printf("dia chi cua bien a la %lu\n", &a);
	printf("dia chi cua bien b la %lu", &b);
	return 0;
	
}

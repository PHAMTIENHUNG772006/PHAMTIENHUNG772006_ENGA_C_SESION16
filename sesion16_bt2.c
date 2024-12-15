#include<stdio.h>
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;
}
int main(){
	int a=5;
	int b=15;
	swap(&a,&b);
	printf("gia tri cua bien a la %d\n",a);
	printf("gia tri cua bien b la %d\n",b);
}

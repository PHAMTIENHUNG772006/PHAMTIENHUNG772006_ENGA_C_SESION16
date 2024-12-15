#include<stdio.h>
int tong(int *x, int *y,int*sum){
	*sum = *x + *y;
	return *x + *y;
}
int main(){
	int a=5;
	int b=15;
	int sum;
	tong(&a,&b,&sum);
	printf(" tong gia tri cua bien %d va %d la %d\n",a,b,sum);

}

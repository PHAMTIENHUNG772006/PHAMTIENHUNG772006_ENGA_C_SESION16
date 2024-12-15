#include<stdio.h>
void inMang(int *ptr,int arr[]){
	for(int i=0;i<9;i++){
		printf("%d",*(ptr+i));
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int *ptr = arr;
	inMang(ptr,arr);
	return 0;
}

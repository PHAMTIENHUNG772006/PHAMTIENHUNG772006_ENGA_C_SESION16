#include<stdio.h>
void xoaMang(int *ptr,int index,int *size){
	for(int i=index;i<*size-1;i++){
		ptr[i]=ptr[i+1];
	}
	(*size)--;
}
int main(){
	int arr[]={1,2,3,4,5};
	int *ptr = arr;
	int index;
	int size = sizeof(arr) / sizeof(arr[0]);;
	printf("Moi ban nhap gia tri xoa vao mang(0-%d) :  ",size-1);
	scanf("%d",&index);
		if(index >= 0 && index < size){
		xoaMang(ptr,index,&size);
			printf("Mang sau khi them phan tu la : \n");
        for(int i = 0; i < size; i++){  
            printf("%d \n", ptr[i]);
            }
		} else{
			printf("vi tri %d khong nam trong mang",index);
		}
	return 0;
}

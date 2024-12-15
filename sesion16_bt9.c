#include<stdio.h>
void upValude(int *ptr,int index,int valude,int size){
	for(int i=size-1;i>=index;i--){
		ptr[i+1]=ptr[i];
	}
	ptr[index]=valude;
}
int main(){
	int arr[]={1,2,3,4,5};
	int *ptr = arr;
	int valude,index;
	int size = sizeof(arr) / sizeof(arr[0]);;
	printf("Moi ban nhap vi tri can them phan tu : ");
	scanf("%d",&index);
	printf("Moi ban nhap gia tri them vao mang :  ");
	scanf("%d",&valude);
		if(index >= 0 && index <= size){
			upValude(ptr,index,valude,size);
			printf("Mang sau khi them phan tu la : ");
        for(int i = 0; i <= size; i++){  
            printf("%d \n", ptr[i]);
            }
		} else{
			printf("vi tri %d khong nam trong mang",index);
		}
	}
	return 0;
}

#include <stdio.h>
#include<string.h>
#include<math.h>
void viTri(int arr[], int size, int n,int *ptr) {
   for(int i=0;i<size;i++){
   	if(arr[i] == n){
   		printf("phan tu %d o vi tri arr[%d]",n,i);
   		return;
	   }
   }
   printf("phan tu %d khong xuat hien trong mang");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 3;
    int *ptr=arr;
    int size = sizeof(arr) / sizeof(int); 
    printf("Mang cua ban la : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    viTri(arr,size,n,ptr);
    return 0;
}


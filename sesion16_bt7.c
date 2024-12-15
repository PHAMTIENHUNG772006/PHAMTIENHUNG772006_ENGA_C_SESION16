#include <stdio.h>
#include<string.h>
#include<math.h>
void inMang(int *arr,int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
void sapXep(int *arr,int size){
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
              int  temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main() {
    int arr[] = {5, 2, 3, 4,1};
    int temp;
    int size = sizeof(arr) / sizeof(int); 
    printf("Mang cua ban truoc khi sap xep la : ");
    inMang(arr,size);
    sapXep(arr,size);
    printf("\nMang cua ban sau khi sap xep la : ");
    inMang(arr,size);
    return 0;
}


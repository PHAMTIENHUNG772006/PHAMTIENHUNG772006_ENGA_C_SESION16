#include <stdio.h>

void updateArray(int arr[], int size, int n, int index) {
    if (index >= 0 && index < size) {
        arr[index] = n; 
    } else {
        printf("phan tu khong nam trong mang\n");
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    printf("Mmang ban dau la : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    updateArray(arr, size, 10, 2); 
    printf("mang sau khi cap nhat la : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


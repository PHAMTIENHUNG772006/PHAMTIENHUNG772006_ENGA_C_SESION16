#include<stdio.h>
void nhapMang(int* arr, int size);
void inMang(int* arr, int size);
void chanLe(int* arr, int size);
void soNTo(int* arr, int size);
int isPrime(int n);
void sapXep(int* arr, int size);
void timKiem(int* arr, int size, int x); 
int main() {
    int choice, size;
    int arr[100];

    do {
        printf("\n******MENU******\n");
        printf("1. Nhap so phan tu va tung phan tu trong mang\n");
        printf("2. Hien thi so phan tu trong mang\n");
        printf("3. Tim so chan trong mang\n");
        printf("4. Tim cac so ngto trong mang\n");
        printf("5. Sap xep mang: a tang dan, b giam dan (theo menu con)\n");
        printf("6. Nhap phan tu va tim kiem trong mang\n");
        printf("7. Thoat\n");
        printf("Hay chon chuc nang (1-7): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Moi ban nhap so luong phan tu trong mang: ");
                scanf("%d", &size);
                nhapMang(arr, size);
                break;
            case 2:
                inMang(arr, size);
                break;
            case 3:
                chanLe(arr, size);
                break;
            case 4:
                soNTo(arr, size);
                break;
            case 5:
                sapXep(arr, size);
                break;
            case 6:
                {
                    int x;
                    printf("Nhap phan tu can tim: ");
                    scanf("%d", &x);
                    timKiem(arr, size, x);
                }
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Du lieu khong hop le. Nhap lai!\n");
        }

    } while(choice != 7);

    return 0;
}
void nhapMang(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("Phan tu thu arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void inMang(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("Phan tu thu %d la %d\n", i + 1, arr[i]);
    }
}
void chanLe(int* arr, int size) {
    printf("Cac phan tu chan trong mang la:\n");
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d\n", arr[i]);
        }
    }
    printf("Cac phan tu le trong mang la:\n");
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d\n", arr[i]);
        }
    }
}
void soNTo(int* arr, int size) {
    printf("Cac so nguyen to trong mang: \n");
    for(int i = 0; i < size; i++) {
        if(isPrime(arr[i])) {
            printf("%d\n", arr[i]);
        }
    }
}
int isPrime(int n) {
    if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return 0; 
    }
    return 1; 
}
void sapXep(int* arr, int size) {
    int sortChoice;
    do {
        printf("1. Sap xep tang dan\n");
        printf("2. Sap xep giam dan\n");
        printf("3. Thoat\n");
        printf("Hay chon chuc nang (1-3): ");
        scanf("%d", &sortChoice);

        switch(sortChoice) {
            case 1:
                for (int i = 0; i < size - 1; i++) {
                    for (int j = i + 1; j < size; j++) {
                        if (arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep tang dan:\n");
                inMang(arr, size);
                break;

            case 2:
                for (int i = 0; i < size - 1; i++) {
                    for (int j = i + 1; j < size; j++) {
                        if (arr[i] < arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep giam dan:\n");
                inMang(arr, size);
                break;

            case 3:
                printf("Thoat khoi menu sap xep.\n");
                break;

            default:
                printf("Du lieu khong hop le, vui long nhap lai!\n");
        }
    } while (sortChoice != 3);
}
void timKiem(int* arr, int size, int x) {
    int found = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == x) {
            printf("Phan tu %d da duoc tim thay tai vi tri %d.\n", x, i + 1); 
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }
}


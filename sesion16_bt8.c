#include<stdio.h>
#include<string.h>
void daoChuoi(char *inputString, int size) {
    for (int i = 0; i < size / 2; i++) {
        char temp = inputString[i];
        inputString[i] = inputString[size - i - 1];
        inputString[size - i - 1] = temp;
    }
}
void instr(char *reverseString,int size){
    for (int i = 0; i < size; i++) {
        printf("%c ", reverseString[i]);
    }
    printf("\n");
}
int main(){
	char *inputString[100];
	char *reverseString = inputString;
	printf("moi ban nhap chuoi can dao nguoc : ");
	scanf("%s",inputString);
	int size = strlen(inputString);
	printf("Chuoi truoc khi dao nguoc: ");
	instr(inputString,size);
    daoChuoi(inputString,size);
    printf("Chuoi sau khi dao nguoc: ");
    instr(reverseString,size);
    return 0;
}

#include <stdio.h>
int main() {
    int num = 10;
    int *numPtr = &num;
    
    printf("Dia chi cua bien la: %d\n", &num);
    printf("Dia chi cua bien la: %d\n", numPtr);
    printf("Gia tri cua bien la: %d\n", num);
    printf("Gia tri cua bien la: %d\n", *numPtr);
}
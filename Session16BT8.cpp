#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];

    printf("Nhap chuoi: ");
    fgets(inputString, 100, stdin);
    
    if (*(inputString + strlen(inputString) - 1) == '\n') {
        *(inputString + strlen(inputString) - 1) = '\0';
    }

    int size = strlen(inputString);
    for (int i = 0; i < size; i++) {
        *(reverseString + i) = *(inputString + size - i - 1);
    }

    printf("inputString: %s\n", inputString);
    printf("reverseString: %s", reverseString);
    return 0;
}
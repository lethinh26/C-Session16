#include <stdio.h>

void printArray(int *array, int size);

int main() {
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(int);
    printArray(array, size);
    return 0;
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    return;
}

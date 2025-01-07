#include <stdio.h>

void updateArray(int *array, int pos, int value);

int main() {
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(int);
    int pos, value;
    printf("Nhap vi tri ban can cap nhat: ");
    scanf("%d", &pos);
    printf("Nhap gia tri ban can cap nhat: ");
    scanf("%d", &value);
    
    updateArray(array, pos, value);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

void updateArray(int *array, int pos, int value) {
    array[pos] = value;
    return;
}
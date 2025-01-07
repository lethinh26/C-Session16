#include <stdio.h>
#include <stdlib.h>

void addArray(int *arr, int pos, int value);

int main() {
    int size = 5;
    int arr[10] = {1,2,3,4,5};
    int pos, value;
    printf("Nhap vi tri ban muon them vao mang: ");
    scanf("%d", &pos);
    printf("Nhap gia tri ban muon them vao mang: ");
    scanf("%d", &value);
    addArray(arr, pos, value);
    size++;
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr+i));
    }
    return 0;
}

void addArray(int *arr, int pos, int value) {
    for (int i = 5; i > pos; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    *(arr + pos) = value;
    return;
}
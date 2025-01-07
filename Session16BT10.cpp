#include <stdio.h>
#include <stdlib.h>

void removeArray(int *arr, int pos);

int main() {
    int size = 5;
    int arr[10] = {1,2,3,4,5};
    int pos;
    printf("Nhap vi tri ban muon xoa: ");
    scanf("%d", &pos);
    removeArray(arr, pos);
    size--;
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr+i));
    }
    return 0;
}

void removeArray(int *arr, int pos) {
    for (int i = pos; i < 5; i++) {
        *(arr + i) = *(arr + i + 1);
    }
    return;
}
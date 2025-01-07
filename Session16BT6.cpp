#include <stdio.h>

int findArray(int *array, int value);

int main() {
    int array[] = {1,2,3,4,5};
    int value;

    printf("Nhap gia tri ban muon tim kiem: ");
    scanf("%d", &value);
    
    int check = findArray(array, value);
    if (check) {
        printf("Gia tri %d nam o vi tri %d", value, check);
    }else {
        printf("Gia tri %d ko ton tai trong mang", value);
    }

    return 0;
}

int findArray(int *array, int value) {
    for (int i = 0; i < 5; i++) {
        if (array[i] == value) {
            return i;
        }
    }
    return 0;
}
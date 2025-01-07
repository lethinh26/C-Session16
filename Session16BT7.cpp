#include <stdio.h>

int sortArray(int *array);

int main() {
    int array[] = {3,5,7,1,8};
    sortArray(array);
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

int sortArray(int *array) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return 0;
}
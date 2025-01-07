#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int a = 5, b = 10;
    printf("a = %d \nb = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d \nb = %d", a, b);
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
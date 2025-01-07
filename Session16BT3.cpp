#include <stdio.h>

void sum(int a, int b, int *res);

int main() {
    int a = 5, b = 10, res;
    sum(a, b, &res);
    printf("a + b = %d", res);
    return 0;
}

void sum(int a, int b, int *res) {
    *res = a+b;
    return;
}

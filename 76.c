
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("\nIn function (After swap): a=%d b=%d", *x, *y);
}

int main() {
    int a, b;
    printf("Enter a and b values:\n");
    scanf("%d%d", &a, &b);
    printf("Before swap: a=%d b=%d", a, b);
    swap(&a, &b);
    printf("\nIn main (After swap): a=%d b=%d\n", a, b);
    return 0;
}

// Program 75: Swapping two numbers using call by value
#include <stdio.h>
void swap(int, int);

int main() {
    int a, b;
    printf("Enter a & b values");
    scanf("%d%d", &a, &b);
    printf("\n Before swap a=%d b=%d", a, b);
    swap(a, b);
    return 0;
}

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\n After swap a=%d b=%d", x, y);
}

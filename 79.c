// Program 79: C program to find Fibonacci Series using function
#include <stdio.h>
void fibo(int);

int main() {
    int n;
    printf("Enter size");
    scanf("%d", &n);
    fibo(n);
    return 0;
}

void fibo(int n) {
    int f = 0, s = 1, t;
    printf("%d %d", f, s);
    t = f + s;
    while (t <= n) { // Again, using n as a maximum value for the term 't', as per the image.
        printf("%d", t);
        f = s;
        s = t;
        t = f + s;
    }
}

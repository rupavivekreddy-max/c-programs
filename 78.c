// Program 78: C program to find Fibonacci series
#include <stdio.h>

int main() {
    int n, f = 0, s = 1, t, i;

    printf("Enter size of the series: ");
    scanf("%d", &n);

    printf("%d %d ", f, s);   // print first two

    for(i = 2; i < n; i++) {  // loop starts from 2
        t = f + s;
        printf("%d ", t);
        f = s;
        s = t;
    }

    return 0;
}


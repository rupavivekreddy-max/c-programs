#include <stdio.h>
int main ()
{
    int a, b, c, d;
    printf("Enter a, b, c values:\n");
    scanf("%d %d %d", &a, &b, &c);
    d = (a + b + c) / 3;
    printf("avg = %d\n", d);
    return 0;
}


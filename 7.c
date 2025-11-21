#include <stdio.h>
int main ()
{
    float pi=3.14, r, area;
    printf("enter r value:");
    scanf("%f", &r);
    area = pi * r * r;
    printf("area of circle = %f\n", area);
    return 0;
}

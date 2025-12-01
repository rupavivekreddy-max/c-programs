#include <stdio.h>
int main() {
    float b, h, area;
    printf("Enter b value: ");
    scanf("%f", &b);
    printf("Enter h value: ");
    scanf("%f", &h);
    area = 0.5 * b * h;
    printf("Area of triangle = %f\n", area);
    return 0;
}

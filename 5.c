#include <stdio.h>

int main()
{
    float r, pi = 3.141;
    printf("Enter radius of Circle\n");
    scanf("%f", &r);
    printf("Area of circle : %.3f", (pi * r * r));
    return 0;
}
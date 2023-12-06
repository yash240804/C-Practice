#include <stdio.h>

int main()
{
    int p, t, r;
    printf("Enter Principle Value, Time Period, Rate Respectively\n");
    scanf("%d  %d  %d", &p, &t, &r);
    printf("The Simple Intrest For Entered Values Is : %d", (p * t * r) / 100);
    return 0;
}
#include <stdio.h>

int main()
{
    int n, rem, div, sum = 0;
    printf("Enter the no. you want to sum of its digit\n");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        div = n / 10;
        n = div;
    }
    printf("Sum Of all the digit is %d", sum);

    return 0;
}
// Take integer inputs till the user enters 0 and print the sum of all numbers (HINT: while loop)
#include <stdio.h>

int main()
{
    int n, sum = 0;
    while (n != 0)
    {
        scanf("%d", &n);
        sum += n;
        printf("%d\n", sum);
    }

    return 0;
}
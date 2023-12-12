#include <stdio.h>

int main()
{
    int n, i = 0, sum = 0;
    printf("Enter the no. till you want sum of\n");
    scanf("%d", &n);
    while (i != n + 1)
    {
        sum += i;
        i++;
    }
    printf("The Sum is : %d", sum);

    return 0;
}
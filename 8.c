#include <stdio.h>

int main()
{
    int n, sum = 0;
    while (n != 0)
    {
        scanf("%d", &n);
        for (int i = n; i >= 0; i--)
        {
            sum += i;
        }
        printf("%d\n", sum);
    }

    return 0;
}
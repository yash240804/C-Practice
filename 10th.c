#include <stdio.h>

int main()
{
    int a = 0, b = 1, n;
    printf("Enter No. Of Element You Want In Fib Series\n");
    scanf("%d", &n);
    printf("The Fib Series Is As Folows : \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        b = b + a;
        a = b - a;
    }

    return 0;
}
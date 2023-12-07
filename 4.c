#include <stdio.h>
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main()
{
    int n;
    printf("Enter no. Of element you want in fib series\n");
    scanf("%d", &n);
    printf("Fib series is as follows : \n");
    for (int i = n; i > 0; i--)
    {
        printf("%d\n", fib(i));
    }

    return 0;
}
#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main()
{
    int n;
    printf("Enter no. you want factorial of : \n");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, factorial(n));

    return 0;
}
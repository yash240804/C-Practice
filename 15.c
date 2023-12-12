#include <stdio.h>

int main()
{
    int n, div, rem, r = 0, t;
    printf("Enter the no. you want check if palindrome : ");
    scanf("%d", &n);
    t = n;
    while (n != 0)
    {
        rem = n % 10;
        r = r * 10 + rem;
        div = n / 10;
        n = div;
    }
    if (t == r)
    {
        printf("The no. is Palindrome\n");
    }
    else
    {
        printf("The no. is not Palindrome\n");
    }

    return 0;
}
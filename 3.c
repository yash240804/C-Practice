#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Two No.\n");
    scanf("%d  %d", &a, &b);
    printf("The Largest No. Is: ");
    if (a > b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }
    return 0;
}
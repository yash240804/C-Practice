#include <stdio.h>
void starpattern1(int n);
void starpattern2(int n);
void starpattern3(int n);
void starpattern4(int n);
void starpattern5(int n);
void starpattern6(int n);
void starpattern7(int n);

int main()
{
    int n, choice;
    printf("Enter No. Of Rows\n");
    scanf("%d", &n);

    while (1)
    {
        printf("Press : \n 0.Exit\n 1.starpattern1\n 2.starpattern2\n 3.starpattern3\n 4.starpattern4\n 5.starpattern5\n 6.starpattern6\n 7.starpattern7\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            goto end;
            break;
        case 1:
            starpattern1(n);
            break;
        case 2:
            starpattern2(n);
            break;
        case 3:
            starpattern3(n);
            break;
        case 4:
            starpattern4(n);
            break;
        case 5:
            starpattern5(n);
            break;
        case 6:
            starpattern6(n);
            break;
        case 7:
            starpattern7(n);
            break;
        }
    }
end:
    return 0;
}
void starpattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void starpattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
void starpattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j > n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void starpattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void starpattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void starpattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j > n)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void starpattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
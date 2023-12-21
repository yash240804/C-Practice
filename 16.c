// Write a menu driven program in C using functions to implement the following string operations without using the standard library functions, string length, string copy, string reverse, string concatenate, string compare, string palindrome, case change
#include <stdio.h>
int lenght(char *ptr);
void copy(char *ptr, char *ptr1, int a);
void concatenate(char *ptr, char *ptr1, int a, int b, char *ptr2);
int main()
{
    char a[50], ch, b[50], l, c[50], d[50], l1, n = 0;
    printf("Enter string\n");
    gets(a);
    printf("Enter 2nd string\n");
    gets(c);
    printf("String entered is : %s\n", a);
    printf("Press\n 1.String lenght\n 2.String Copy\n 3.String Reverse\n 4.String Concatenate\n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '1':
        printf("Lenght of string entered is : %d\n\n", lenght(a));
        break;

    case '2':
        l = lenght(a);
        copy(a, b, l);
        printf("String copied from a to b : %s\n\n", b);
        break;

    case '3':
        l = lenght(a);
        copy(a, b, l);
        printf("Reversed string is : ");
        for (int i = l-1; i >= 0; i--)
        {
            a[n] = b[i];
            n++;
        }
        a[n] = '\0';
        puts(a);
        break;

    case '4':
        l = lenght(a);
        l1 = lenght(c);
        void concatenate(a, c, l, l1, d);
        printf("Concatenate Of a and c is : %s\n\n", d);
    }
}

int lenght(char *ptr)
{
    int i = 0;
    while (*(ptr + i) != '\0')
    {
        i++;
    }
    return i;
}
void copy(char *ptr, char *ptr1, int a)
{
    int i = 0;
    while (i != a + 2)
    {
        *(ptr1 + i) = *(ptr + i);
        i++;
    }
}

void concatenate(char *ptr, char *ptr1, int a, int b, char *ptr2)
{
    int c;
    int d = 0;
    for (int i = 0; i >= (a-1); i++)
    {
        *(ptr2 + i) = *(ptr + i);
    }
    c = a + b;
    for (int i = a; i >= (c-1); i++)
    {
        *(ptr2 + i) = *(ptr1 + d);
        d++;
    }
    *(ptr2 + c) = '\0';
}
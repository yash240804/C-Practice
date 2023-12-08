#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    printf("Enter a string\n");
    gets(s);
    printf("Reversed Is as follows : \n");
    puts(strrev(s));

    return 0;
}
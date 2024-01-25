#include <stdio.h>

int main()
{
    int n, rem;
    for (int i = 0; i < 1000; i++){
        n = i;
        int div = 0;
        while (n > 0){
            rem = n % 10;
            div = div + (rem * rem * rem);
            n = n / 10;
        }
        if (i == div){
            printf("%d is armstrong\n", i);
        }
    }
    return 0;
}
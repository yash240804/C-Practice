#include <stdio.h>

int main()
{
    int a[100], n, avg, sum=0;
    printf("Enter no. of students in class\n");
    scanf("%d", &n);
    printf("Enter mark of students for avg.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("Avg. of students : %d", sum / n);

    return 0;
}
#include <stdio.h>
// for binary array must be sorted
int main()
{
    int a[] = {1, 4, 7, 100, 200, 400, 500};
    int size = sizeof(a) / sizeof(a[0]);
    int low = 0, mid, high = size - 1;
    int element;
    printf("Enter No. You Want To Search");
    scanf("%d", &element);
    while (low <= high){
        mid = (low + high) / 2;
        if (a[mid] == element){
            printf("Element %d found at index %d", element, mid);
            break;
        }
        else if (a[mid] < element){
            low = mid + 1;
        }
        else{
            high = low - 1;
        }
    }
    return 0;
}
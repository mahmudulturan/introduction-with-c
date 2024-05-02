#include <stdio.h>
int main()
{
    int arr[5] = {2, 4, 5, 9, 7};
    printf("address of 0 no. index - %p\n", arr);
    printf("address of 0 no. index - %p\n", &arr[0]);

    printf("first value of the array - %d\n", *arr);
    printf("second value of the array - %d\n", *(arr + 1));
    return 0;
}
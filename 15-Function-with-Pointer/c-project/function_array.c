#include <stdio.h>

void fun(int *arr, int n)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[5] = {3, 4, 5, 2, 1};
    fun(arr, 5);
    int sz = sizeof(arr) / sizeof(int);
    printf("size of array - %d\n", sz); // output will be 5
    return 0;
}
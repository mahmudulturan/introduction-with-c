#include <stdio.h>

void fun(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    fun(arr, n);
    int sz = sizeof(arr) / sizeof(int);
    printf("size of array - %d\n", sz); // output will be 5
    return 0;
}
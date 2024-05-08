#include <stdio.h>

void fun(int arr[], int i, int n)
{
    if (i == n)
    {
        return;
    }
    printf("%d ", arr[i]);
    fun(arr, i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    fun(arr, 0, n);
    return 0;
}
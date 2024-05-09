#include <stdio.h>

void printEvenIndices(int arr[], int n)
{
    if (n == -1)
    {
        return;
    }
    if (n % 2 == 0)
    {
        printf("%d ", arr[n]);
    }

    printEvenIndices(arr, n - 1);
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
    printEvenIndices(arr, n - 1);
    return 0;
}
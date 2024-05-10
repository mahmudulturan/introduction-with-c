#include <stdio.h>
#include <limits.h>

int findMax(int arr[], int i, int n)
{
    if (i == n)
    {
        return INT_MIN;
    }
    int maxNumber = findMax(arr, i + 1, n);
    if (maxNumber < arr[i])
    {
        return arr[i];
    }
    else
    {
        return maxNumber;
    }
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
    int maxNumber =  findMax(arr, 0, n);
    printf("%d", maxNumber);
    return 0;
}
#include <stdio.h>

int count_before_one(int arr[], int n)
{
    int totalCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            break;
        }
        else
        {
            totalCount++;
        }
    }

    return totalCount;
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
    int totalCount = count_before_one(arr, n);
    printf("%d\n", totalCount);
    return 0;
}
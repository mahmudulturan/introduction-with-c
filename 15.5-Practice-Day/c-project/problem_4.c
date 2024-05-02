#include <stdio.h>

void change_it(int arr[], int n)
{
    int changedArr[n];
    for (int i = 0; i < n; i++)
    {
        changedArr[i] = arr[i];
        if (i == (n - 1))
        {
            changedArr[i] = 100;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", changedArr[i]);
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
    change_it(arr, n);
    return 0;
}
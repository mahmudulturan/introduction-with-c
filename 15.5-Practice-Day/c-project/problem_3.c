#include <stdio.h>

int count_odd(int arr[], int n)
{
    int total_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            total_odd++;
        }
    }
    return total_odd;
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
    int total_odd = count_odd(arr, n);
    printf("%d", total_odd);
    return 0;
}
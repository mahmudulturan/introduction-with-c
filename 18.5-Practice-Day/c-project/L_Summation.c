#include <stdio.h>

long long int summation(int arr[], int i, int n)
{
    if (i == n)
    {
        return 0;
    }
    long long int sum = summation(arr, i + 1, n) + arr[i];
    return sum;
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
    long long int sum = summation(arr, 0, n);
    printf("%lld", sum);
    return 0;
}
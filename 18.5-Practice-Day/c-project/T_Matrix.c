#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sumOfPrimaryMatrix = 0;
    int sumOfSecondaryMatrix = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumOfPrimaryMatrix += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sumOfSecondaryMatrix += arr[i][j];
            }
        }
    }
    printf("%d", abs(sumOfPrimaryMatrix - sumOfSecondaryMatrix));
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int positiveSum = 0, negativeSum = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        if (0 < num)
        {
            positiveSum += num;
        }
        else if (0 > num)
        {
            negativeSum += num;
        }
    }
    printf("%d %d", positiveSum, negativeSum);
    return 0;
}
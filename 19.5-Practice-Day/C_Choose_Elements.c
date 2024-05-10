#include <stdio.h>
#include <limits.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    long long int highestSum = 0;
    for (int i = 0; i < k; i++)
    {
        highestSum += a[i];
    }
    printf("%lld", highestSum);
    return 0;
}
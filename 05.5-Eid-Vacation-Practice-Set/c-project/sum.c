#include <stdio.h>

int main()
{
    long long int n, sum = 0;
    scanf("%lld", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}
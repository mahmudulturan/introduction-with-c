#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long int multiply = a * b * c;
        if (m % multiply == 0)
        {
            long long int missingNumber = m / multiply;
            printf("%lld\n", missingNumber);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int a, b;
    long long int k;
    scanf("%d %d %lld", &a, &b, &k);
    if (a % k == 0 && b % k == 0)
    {
        printf("Both");
    }
    else if (a % k == 0)
    {
        printf("Memo");
    }
    else if (b % k == 0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }

    return 0;
}
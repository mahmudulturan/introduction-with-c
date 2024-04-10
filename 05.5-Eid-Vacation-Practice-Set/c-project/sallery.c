#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    long long int totalIncome = (long long)X * 365;
    printf("%lld", totalIncome);
    return 0;
}
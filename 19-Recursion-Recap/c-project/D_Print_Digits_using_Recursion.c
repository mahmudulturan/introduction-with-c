#include <stdio.h>

int printDigits(int n)
{
    if (n == 0)
    {
        return;
    }
    int digit = printDigits(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        int digit = printDigits(n / 10);
        printf("%d ", n % 10);
        printf("\n");
    }

    return 0;
}
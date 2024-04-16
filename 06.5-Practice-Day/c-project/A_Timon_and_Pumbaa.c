#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int candle = a - b;
    if (candle <= 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", candle);
    }
    return 0;
}
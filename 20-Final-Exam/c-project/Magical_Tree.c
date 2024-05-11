#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int line = 11 + (n / 2) - 5;
    int t = 1, s = line - 1;

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < t; j++)
        {
            printf("*");
        }
        t += 2;
        s--;
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        int bs = 5;
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
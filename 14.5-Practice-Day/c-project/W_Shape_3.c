#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, p = 1;
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < p; j++)
        {
            printf("*");
        }
        if ((i + 1) < n)
        {
            s--;
            p += 2;
        }
        else if ((i + 1) > n)
        {
            s++;
            p -= 2;
        }
        printf("\n");
    }

    return 0;
}
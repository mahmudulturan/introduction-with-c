#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = 0, k = (2 * n) - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        k -= 2;
        s++;
        printf("\n");
    }

    return 0;
}
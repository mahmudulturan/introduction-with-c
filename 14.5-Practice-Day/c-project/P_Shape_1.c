#include <stdio.h>
int main()
{
    int n, s;
    scanf("%d", &n);
    s = n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < s; j++)
        {
            printf("*");
        }
        s--;
        printf("\n");
    }

    return 0;
}
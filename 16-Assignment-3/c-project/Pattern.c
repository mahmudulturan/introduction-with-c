#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, p = 1;
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < p; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        if (i == n - 1)
        {
            p -= 2;
            s++;
        }
        else if (i < n - 1)
        {
            s--;
            p += 2;
        }
        else if (i > n - 1)
        {
            s++;
            p -= 2;
        }
        
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int x;
        scanf("%d", &x);
        for (int i = 0; i < n; i++)
        {
            if (x == a[i])
            {
                printf("YES\n");
                break;
            }
            else if (i < n - 1)
            {
                continue;
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
    }

    return 0;
}
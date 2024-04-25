#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int devidedBy2 = 0, devidedBy3 = 0;
    for (int i = 0; i < n; i++)
    {
        int value = a[i];
        if (value % 2 == 0 && value % 3 == 0)
        {
            devidedBy2++;
        }
        else if (value % 2 == 0)
        {
            devidedBy2++;
        }
        else if (value % 3 == 0)
        {
            devidedBy3++;
        }
        else
        {
            continue;
        }
    }
    printf("%d %d", devidedBy2, devidedBy3);
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int theNumber;
    scanf("%d", &theNumber);
    for (int i = 0; i < n; i++)
    {
        if (theNumber == arr[i])
        {
            printf("%d\n", i);
            break;
        }
        else if (i < n - 1)
        {
            continue;
        }
        else
        {
            printf("-1");
        }
    }
    
    return 0;
}
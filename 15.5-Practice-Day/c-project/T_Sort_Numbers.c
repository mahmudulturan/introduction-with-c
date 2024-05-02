#include <stdio.h>
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sortedArr[3];
    for (int i = 0; i < 3; i++)
    {
        sortedArr[i] = arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (sortedArr[i] > sortedArr[j])
            {
                int tmp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", sortedArr[i]);
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
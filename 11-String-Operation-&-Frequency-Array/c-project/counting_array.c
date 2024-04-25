#include <stdio.h>
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
        if (arr[i] == 2)
        {
            count2++;
        }
        if (arr[i] == 3)
        {
            count3++;
        }
    }
    printf("0 - %d times\n", count0);
    printf("1 - %d times\n", count1);
    printf("2 - %d times\n", count2);
    printf("3 - %d times\n", count3);
    return 0;
}
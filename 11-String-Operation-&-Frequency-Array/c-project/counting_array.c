#include <stdio.h>
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[8] = {0};
    for (int i = 0; i < 8; i++)
    {
        int number = arr[i];
        count[number]++;
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d - %d times\n", i, count[i]);
    }
    return 0;
}
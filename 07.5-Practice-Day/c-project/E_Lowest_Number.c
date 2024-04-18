#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int minNum = INT_MAX;
    int indexNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (minNum > arr[i])
        {
            minNum = arr[i];
            indexNum = i + 1;
        }
    }
    printf("%d %d", minNum, indexNum);
    return 0;
}
#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a, maxNumber = INT_MIN;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a);
        if (a > maxNumber)
        {
            maxNumber = a;
        }
    }
    printf("%d", maxNumber);
    return 0;
}

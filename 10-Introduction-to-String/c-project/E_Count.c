#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    scanf("%s", a);
    int numberLength = strlen(a);
    int sum = 0;
    for (int i = 0; i < numberLength; i++)
    {
        sum += a[i] - 48;
    }
    printf("%d", sum);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[10001];
        scanf("%s", a);
        int capitalCount = 0, smallCount = 0, digitCount = 0;
        for (int i = 0; i < strlen(a); i++)
        {
            char value = a[i];
            if (value >= 'A' && value <= 'Z')
            {
                capitalCount++;
            }
            else if (value >= 'a' && value <= 'z')
            {
                smallCount++;
            }
            else if (value >= '0' && value <= '9')
            {
                digitCount++;
            }
        }
        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }
    return 0;
}
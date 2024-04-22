#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[101];
        scanf("%s", a);
        int stringLength = strlen(a);
        if (stringLength > 10)
        {
            printf("%c%d%c\n", a[0], stringLength - 2, a[stringLength - 1]);
        }
        else
        {
            printf("%s\n", a);
        }
    }

    return 0;
}
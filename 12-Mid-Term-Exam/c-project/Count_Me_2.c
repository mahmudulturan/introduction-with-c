#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    scanf("%s", a);
    int consonantsCount = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        char value = a[i];
        if (value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u')
        {
            continue;
        }
        else
        {
            consonantsCount++;
        }
    }
    printf("%d", consonantsCount);

    return 0;
}
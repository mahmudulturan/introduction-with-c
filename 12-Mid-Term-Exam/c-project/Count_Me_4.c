#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int length[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        length[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (length[i] != 0)
        {
            printf("%c - %d \n", i + 'a', length[i]);
        }
    }

    return 0;
}
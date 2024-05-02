#include <stdio.h>

int my_len(char s[])
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char s[10001];
    scanf("%s", s);

    int stringLen = my_len(s);
    printf("%d", stringLen);
    return 0;
}
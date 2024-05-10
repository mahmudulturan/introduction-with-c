#include <stdio.h>

int countVowels(char str[], int i)
{
    if (str[i] == '\0')
    {
        return 0;
    }

    int cnt = countVowels(str, i + 1);

    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] = str[i] - 32;
    }

    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
        return cnt + 1;
    }

    return cnt;
}

int main()
{
    int s[201];
    fgets(s, 201, stdin);
    int count = countVowels(s, 0);
    printf("%d", count);
    return 0;
}
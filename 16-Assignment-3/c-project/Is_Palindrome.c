#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int lengthOfString = strlen(s);
    int j = lengthOfString - 1;
    int flag = 1;
    for (int i = 0; i < lengthOfString; i++)
    {
        if (s[i] != s[j])
        {
            flag = 0;
        }
        j--;
    }
    return flag;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int isPalidrome = is_palindrome(s);
    if (isPalidrome == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
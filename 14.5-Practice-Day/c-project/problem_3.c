#include <stdio.h>

int char_to_ascii(char a)
{
    int asciiValue = a;
    return asciiValue;
}

int main()
{
    char a;
    scanf("%c", &a);
    int asciiValue = char_to_ascii(a);
    printf("%d", asciiValue);
    return 0;
}
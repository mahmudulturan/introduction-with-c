#include <stdio.h>

char capital_to_small(char a)
{
    char smallLetter = a + 32;
    return smallLetter;
}

int main()
{
    char a;
    scanf("%c", &a);
    char smallLetter = capital_to_small(a);
    printf("%c", smallLetter);
    return 0;
}
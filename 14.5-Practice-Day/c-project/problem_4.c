#include <stdio.h>

char small_to_capital(char a)
{
    char capitalLetter = a - 32;
    return capitalLetter;
}

int main()
{
    char a;
    scanf("%c", &a);
    char capitalLetter = small_to_capital(a);
    printf("%c", capitalLetter);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char a[16];
    char b[16];
    gets(a);
    fgets(b, 16, stdin);
    printf("%s\n", a);
    printf("%s\n", b);
    return 0;
}
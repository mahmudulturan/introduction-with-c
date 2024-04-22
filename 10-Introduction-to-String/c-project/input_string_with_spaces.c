#include <stdio.h>
#include <string.h>

int main()
{
    char b[16];
    fgets(b, 16, stdin);
    printf("%s\n", b);
    return 0;
}
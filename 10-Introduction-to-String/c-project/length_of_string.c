#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int length = strlen(a);
    printf("%d", length);
    return 0;
}
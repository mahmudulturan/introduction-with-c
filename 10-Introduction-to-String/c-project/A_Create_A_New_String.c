#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    int firstCount = strlen(a);
    int secondCount = strlen(b);
    printf("%d %d\n%s %s\n", firstCount, secondCount, a, b);
    return 0;
}
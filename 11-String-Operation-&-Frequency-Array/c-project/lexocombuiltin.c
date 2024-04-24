#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int com = strcmp(a, b);
    if (com == 0)
    {
        printf("Same\n");
    }
    else if (com < 0)
    {
        printf("A Choto\n");
    }
    else if (com > 0)
    {
        printf("B Choto\n");
    }
    return 0;
}
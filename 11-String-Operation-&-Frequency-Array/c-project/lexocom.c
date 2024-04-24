#include <stdio.h>
int main()
{
    char a[100], b[1000];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A chooto \n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B chooto \n");
            break;
        }
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A chooto \n");
            break;
        }
        else if (a[i] > b[i])
        {
            printf("B chooto \n");
            break;
        }
    }
    return 0;
}
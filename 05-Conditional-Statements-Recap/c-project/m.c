#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X >= 48 && 57 >= X)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (X <= 'Z' && X >= 'A')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }
    return 0;
}
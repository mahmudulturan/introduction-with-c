#include <stdio.h>
#include <stdlib.h>

int my_abs(int a)
{
    int num = abs(a);
    return num;
}

int main()
{
    int n;
    scanf("%d", &n);
    int absNum = my_abs(n);
    printf("%d", absNum);
    return 0;
}
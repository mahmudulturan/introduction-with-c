#include <stdio.h>

void fun(int *x)
{
    *x = 5;
}

int main()
{
    int x = 4;
    fun(&x);
    printf("%d", x);
    return 0;
}
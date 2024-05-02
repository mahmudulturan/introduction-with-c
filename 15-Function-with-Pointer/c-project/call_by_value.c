#include <stdio.h>

void fun(int x)
{
    x = 5;
}

int main()
{
    int x = 4;
    fun(x);
    printf("%d", x); // the output will be 4
    return 0;
}
#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    int rina = (X - Y) / 2;
    int mina = rina + Y;
    printf("%d %d", mina, rina);
    return 0;
}
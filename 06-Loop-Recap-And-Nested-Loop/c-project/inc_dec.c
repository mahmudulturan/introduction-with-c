#include <stdio.h>
int main()
{
    int i = 2;
    int a = ++i;
    printf("i-%d a-%d\n", i, a); // the output i-3 a-3
    int b = i++;
    printf("i-%d b-%d\n", i, b); // the output i-4 b-3
    int x = --i;
    printf("i-%d x-%d\n", i, x); // the output i-3 x-3
    int y = i--;
    printf("i-%d y-%d\n", i, y); // the output i-2 y-3
    return 0;
}

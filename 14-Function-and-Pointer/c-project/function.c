#include <stdio.h>

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int result = sum(4,5);
    printf("%d", result);
    return 0;
}

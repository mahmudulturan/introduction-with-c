#include <stdio.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sumOfTwo = sum(a,b);
    printf("%d", sumOfTwo);
    return 0;
}
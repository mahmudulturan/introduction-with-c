#include <stdio.h>

int sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = a + b;
    return result;
}

int main()
{
    int sumOfTwo = sum();
    printf("%d", sumOfTwo);
    return 0;
}
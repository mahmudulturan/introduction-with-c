#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 3;
    int sum = a + b;              // sum
    int sub = a - b;              // substract
    int mlt = a * b;              // multiply
    int dvd = a / b;              // division
    float floatDvd = a * 1.0 / c; // floating number division
    int mdl = b / a;              // modulus
    printf("%d - sum\t\n", sum);
    printf("%d - substract\t\n", sub);
    printf("%d - multiply\t\n", mlt);
    printf("%d - divide\t\n", dvd);
    printf("%0.2f - float divide\t\n", floatDvd);
    printf("%d - modulus\t\n", mdl);
    return 0;
}
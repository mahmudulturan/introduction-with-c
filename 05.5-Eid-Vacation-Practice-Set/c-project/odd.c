#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int firstNumber = n / 4 - 3;
    int secondNumber = firstNumber + 2;
    int thirdNumber = firstNumber + 4;
    int fourthNumber = firstNumber + 6;
    printf("%d %d %d %d", firstNumber, secondNumber, thirdNumber, fourthNumber);
    return 0;
}

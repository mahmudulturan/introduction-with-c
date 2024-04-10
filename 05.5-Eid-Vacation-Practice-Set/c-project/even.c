#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int firstNumber = n / 5 - 4;
    int secondNumber = firstNumber + 2;
    int thirdNumber = firstNumber + 4;
    int fourthNumber = firstNumber + 6;
    int fifthNumber = firstNumber + 8;
    printf("%d %d %d %d %d", firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber);
    return 0;
}

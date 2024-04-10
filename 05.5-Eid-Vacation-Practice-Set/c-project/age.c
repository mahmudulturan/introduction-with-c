#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    int daughtersAge = X / 5;
    int fathersAge = daughtersAge * 4;
    printf("%d %d", fathersAge, daughtersAge);
    return 0;
}

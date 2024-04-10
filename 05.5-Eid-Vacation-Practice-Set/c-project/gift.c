#include <stdio.h>


int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int totalGift = n / m;
    int totalChildren = n % m;
    printf("%d %d", totalGift, totalChildren);
    return 0;
}

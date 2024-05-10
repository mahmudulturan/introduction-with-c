#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    float originalPrice = p / (1 - (x / 100.0));
    printf("%0.2f", originalPrice);
    return 0;
}
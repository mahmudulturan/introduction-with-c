#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int totalDays = (m1 * d) / (m1 + m2);
        int fewerDays = d - totalDays;
        printf("%d\n", fewerDays);
    }
    return 0;
}
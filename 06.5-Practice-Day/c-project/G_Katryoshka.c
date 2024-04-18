#include <stdio.h>
int main()
{
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long int min = n < m ? n : m;
    min = min < k ? min : k;
    n = n - min;
    m = m - min;
    k = k - min;
    if (n / 2 >= k)
        min += k;
    else
        min += n / 2;
    printf("%lld", min);
    return 0;
}
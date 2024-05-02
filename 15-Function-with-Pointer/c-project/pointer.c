#include <stdio.h>
int main()
{
    int x = 4;
    printf("%p\n", &x);
    int*p = &x;
    printf("%p\n", p);
    printf("value of x - %d\n", *p);
    *p = 5;
    printf("value of x after reasign by dereference - %d\n", *p);
    return 0;
}
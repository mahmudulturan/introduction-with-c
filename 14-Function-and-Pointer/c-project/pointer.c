#include <stdio.h>
int main()
{
    int x = 54;
    printf("%p\n", &x); // to print an address we need to use %p
    int*xAddress = &x;
    printf("%p\n", xAddress); // to print an address we need to use %p
    return 0;
}
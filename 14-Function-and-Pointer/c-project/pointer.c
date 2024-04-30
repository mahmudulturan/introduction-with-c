#include <stdio.h>
int main()
{
    int x = 54;
    printf("%p\n", &x); // to print an address we need to use %p
    int *xAddress = &x;
    printf("%p\n", xAddress);  // to print an address we need to use %p
    printf("%d\n", *xAddress); // to print the variable by dereference
    *xAddress = 55;            // to change the value of the variable by dereference
    printf("%d\n", *xAddress); // to print the variable by dereference

    return 0;
}
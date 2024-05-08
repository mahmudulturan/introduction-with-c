#include <stdio.h>

void world()
{
    printf("World ");
}

void hello()
{
    printf("Hello ");
    world();
}

int main()
{
    hello();
    printf("End ");
    return 0;
}

// output will be -> Hello World End 
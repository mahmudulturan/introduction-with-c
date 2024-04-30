#include <stdio.h>
int x = 10; // global variable
void func()
{
    printf("%d\n", x);
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int y = 20;
        printf("%d\n", y);
    }
    // printf("%d\n",y);     // we can't access the y variable beacuase the y variable's scope are limited in the loop's sco
    func();
    printf("%d\n", x);
}
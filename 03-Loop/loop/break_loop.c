#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i += 1)
    {
        if (i % 2 == 0)
        {
            printf("%d - Even \n", i);
        }
        else if (i == 7)
        {
            break;
        }
        else{
            printf("%d - Odd \n", i);
        }
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N > 1000)
    {
        printf("I will buy Punjabi\n");
        if (N >= 1500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }

    return 0;
}

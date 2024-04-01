#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 100)
    {
        printf("Briyani Khabo");
    }
    else if (taka >= 50)
    {
        printf("Phuchka Khabo");
    }
    else if (taka >= 25)
    {
        printf("Ice creame Khabo");
    }
    else
    {
        printf("Kihcchu Khabo Naa");
    };

    return 0;
}
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        int pathanCount = 0, tigerCount = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == 'P')
            {
                pathanCount += 1;
            }
            if (str[j] == 'T')
            {
                tigerCount += 1;
            }
        }
        if (pathanCount == tigerCount)
        {
            printf("Draw\n");
        }
        else if (pathanCount > tigerCount)
        {
            printf("Pathaan\n");
        }
        else if (pathanCount < tigerCount)
        {
            printf("Tiger\n");
        }
    }
    return 0;
}
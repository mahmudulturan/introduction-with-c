#include <stdio.h>
int main()
{
    int arr[5];                 // declare an array with limit 5
    for (int i = 0; i < 5; i++) // take input
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) // show output
    {
        printf("%d\n", arr[i]);
    }
    int arr2[3] = {15, 785};
    for (int i = 0; i < 3; i++) // show output
    {
        printf("%d ", arr2[i]); // 15 785 0
    }
    return 0;
}
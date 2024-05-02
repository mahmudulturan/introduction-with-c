#include <stdio.h>

void func(int arr[])
{
    arr[0] = 100;
}

int main()
{
    int arr[5] = {25, 6, 7, 8, 9};
    func(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
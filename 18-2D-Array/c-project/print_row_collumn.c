#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int c;
    scanf("%d", &c);

    // print row wise
    for (int j = 0; j < col; j++)
    {
        printf("%d ", arr[c][j]);
    }
    printf("\n");
    // print column wise
    for (int i = 0; i < row; i++)
    {
        printf("%d ", arr[i][c]);
        printf("\n");
    }

    return 0;
}
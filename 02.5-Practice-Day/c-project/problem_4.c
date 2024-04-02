// You need to take one integer value as input and tell if the value is positive or negative or zero.
// See the sample input and output for more clarification.

// Sample Input        Sample Output
// 10                  positive
// -50                 negative
// 0                   zero

#include <stdio.h>
int main()
{
    int theNumber;
    scanf("%d", &theNumber);
    // printf("%d", theNumber);
    if (theNumber > 0)
    {
        printf("positive");
    }
    else if (theNumber == 0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }
    return 0;
}
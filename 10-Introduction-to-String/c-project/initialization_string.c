#include <stdio.h>
int main()
{
    char a[5] = {'T', 'u', 'r', 'a', 'n'};
    for (int i = 0; i < 5; i++) // output will be turan
    {
        printf("%c", a[i]);
    }
    printf("\n");
    
    char b[6] = "Turan\0"; // output will be Turan
    char c[6] = "Turan";   // output will be Turan
    char d[5] = "Turan";   // output will be TuranTuran or garbage value
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%s\n", d);
    return 0;
}
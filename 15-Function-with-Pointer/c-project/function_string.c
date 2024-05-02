#include <stdio.h>
#include <string.h>

void fun(char a[])
{
    printf("%s", a); // output will be mango
    int len = strlen(a);
    printf("%d", len); // output will be 5
}

int main()
{
    char s[10] = "mango";
    fun(s);
    return 0;
}
#include <stdio.h>

int func(int a, int b)
{
    return a + b;
}

int main()
{
    int ans = func(2, 3);
    printf("%d", ans);
}
//With arguments and with the return value
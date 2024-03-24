#include <stdio.h>

int func()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    return a + b;
}

int main()
{
    int ans = func();
    printf("%d", ans);
}

//Without arguments and with the return value.
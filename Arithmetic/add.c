#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf(
        "Enter number a: "
        );
    scanf("%d", &a);

    printf(
        "Enter number b: "
        );
    scanf("%d", &b);

    printf(
        "The sum of %d and %d is %d\n", a, b, a + b
        );
    return 0;
}
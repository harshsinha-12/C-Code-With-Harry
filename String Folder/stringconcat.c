#include <stdio.h>
#include <string.h>

int main()
{
    char s[11] = "Hello";  // Allocate enough space for "Hello", "World" and the null terminator
    char t[] = "World";
    strcat(s, t);
    printf("String = %s", s);
    return 0;
}
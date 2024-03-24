#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Hello";
    char t[] = "World";
    int cmp = strcmp(s, t);
    printf("Comparison result = %d", cmp);
}

/*The strcmp() function is used to compare two strings to find out whether they are the same or different. It takes two strings as two of its parameter. It will compare two strings, character by character until there is a mismatch or the iterator reaches the end of one of the strings. 

If both of the strings are identical, strcmp( ) returns a value of zero. If they are not identical, it will return a value less than zero, considering the ASCII value of the mismatched character in the first string is less than the mismatched character in the second string. Else, it will return a value greater than 0.*/
/*What is Switch?
The control statement that allows us to make a decision effectively from
the number of choices is called a switch, or a switch case-default 
since these three keywords go together to make up the control statement.
The expression in switch returns an integral value, which is then compared
with different cases. Switch executes that block of code, which matches
the case value. If the value does not match with any of the cases,
then the default block is executed. */

#include <stdio.h>

int main()
{
    int i = 2;

    switch (i)
    {
    case 1:
        printf("Statement 1");
        break;

    case 2:
        printf("Statement 2");
        break;

    case 3:
        printf("Statement 3");
        break;

    default:
        printf("No valid i to switch to.");
        break;
    }
    return 0;
}
#include <stdio.h>

int main()

{

    int arr[] = {1, 5, 7, 2};

    arr[2] = 8; //changing the element on index 2

    printf("%d ", arr[2]); //printing element on index 2
    printf("%d ", arr); //printing array address
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }

}
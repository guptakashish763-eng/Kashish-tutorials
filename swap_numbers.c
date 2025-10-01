#include <stdio.h>

// Function for Call by Value
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

// Function for Call by Reference
void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call by Value
    swapByValue(x, y);
    printf("After swapByValue (in main): x = %d, y = %d\n\n", x, y);

    // Call by Reference
    swapByReference(&x, &y);
    printf("After swapByReference (in main): x = %d, y = %d\n", x, y);

    return 0;
}

#include <stdio.h>

// Function to multiply array elements using pointer
int multiplyArray(int *arr, int size) {
    int result = 1;
    for (int i = 0; i < size; i++) {
        result *= *(arr + i); // using pointer arithmetic
    }
    return result;
}

int main() {
    int arr[5], size, result;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Passing array (as pointer) to function
    result = multiplyArray(arr, size);

    printf("Multiplication of array elements = %d\n", result);

    return 0;
}

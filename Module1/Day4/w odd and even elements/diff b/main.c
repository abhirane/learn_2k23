#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            // Even element
            sumEven += arr[i];
        } else {
            // Odd element
            sumOdd += arr[i];
        }
    }

    int difference = sumOdd - sumEven;

    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Sum of even elements: %d\n", sumEven);
    printf("Difference: %d\n", difference);

    return 0;
}

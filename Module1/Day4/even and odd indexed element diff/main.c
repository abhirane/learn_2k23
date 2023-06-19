#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sumOddIndices = 0;
    int sumEvenIndices = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            // Even index
            sumEvenIndices += arr[i];
        } else {
            // Odd index
            sumOddIndices += arr[i];
        }
    }

    int difference = sumOddIndices - sumEvenIndices;

    printf("Sum of elements at odd indices: %d\n", sumOddIndices);
    printf("Sum of elements at even indices: %d\n", sumEvenIndices);
    printf("Difference: %d\n", difference);

    return 0;
}

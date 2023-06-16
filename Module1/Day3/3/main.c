#include <stdio.h>

int findLargestAfterDeletingDigit(int num) {
    int max = 0;
    int digit;
    int temp = num;

    while (temp > 0) {
        digit = temp % 10;  // Extract the rightmost digit
        temp /= 10;        // Remove the rightmost digit

        if (temp > max) {
            max = temp;   // Update the maximum if the current number is greater
        }

        temp = temp * 10 + digit;  // Restore the number by adding back the extracted digit
    }

    return max;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestAfterDeletingDigit(num);

    printf("Largest number after deleting a digit: %d\n", largest);

    return 0;
}

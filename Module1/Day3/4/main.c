#include <stdio.h>
#include <limits.h>

void findSmallestAndLargestDigits(int n, ...) {
    va_list args;
    va_start(args, n);

    int i;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int num;

    for (i = 0; i < n; i++) {
        num = va_arg(args, int);  // Retrieve the next number from the variable arguments

        while (num != 0) {
            int digit = num % 10;  // Extract the rightmost digit
            num /= 10;  // Remove the rightmost digit

            if (digit < smallest) {
                smallest = digit;  // Update the smallest digit if necessary
            }

            if (digit > largest) {
                largest = digit;  // Update the largest digit if necessary
            }
        }
    }

    va_end(args);

    if (smallest == INT_MAX || largest == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    findSmallestAndLargestDigits(3, 8, 156, 123450);

    return 0;
}

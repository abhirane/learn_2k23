#include <stdio.h>

void printExponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num; // Treat the double value as an unsigned long long

    unsigned long long exponent = (*ptr >> 52) & 0x7FF; // Extract the exponent bits

    // Print the exponent in hexadecimal format
    printf("Exponent in hexadecimal: 0x%llX\n", exponent);

    // Print the exponent in binary format
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}

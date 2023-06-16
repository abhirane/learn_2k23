#include <stdio.h>

// Function to swap two values of any type
void swap(void *a, void *b, size_t size) {
    char *temp = (char *)malloc(size);  // Allocate temporary memory

    // Copy the contents of 'a' to the temporary memory
    memcpy(temp, a, size);

    // Copy the contents of 'b' to 'a'
    memcpy(a, b, size);

    // Copy the contents of 'temp' to 'b'
    memcpy(b, temp, size);

    free(temp);  // Free the temporary memory
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    float x = 3.14, y = 2.71;
    printf("Before swap: x = %.2f, y = %.2f\n", x, y);
    swap(&x, &y, sizeof(float));
    printf("After swap: x = %.2f, y = %.2f\n", x, y);

    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}

#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void complex_read(struct Complex* num) {
    printf("Enter real part ");
    scanf("%f", &num->real);
    printf("Enter imaginary part: ");
    scanf("%f", &num->imaginary);
}

void complex_write(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
}

struct Complex complex_add(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

struct Complex complex_mul(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

int main() {
    struct Complex no1, no2, sum, product;

    printf("Enter the first complex number:\n");
    complex_read(&no1);

    printf("Enter second complex number:\n");
    complex_read(&no2);

    sum = complex_add(no1, no2);
    product = complex_mul(no1, no2);

    printf("\nSum of two complex numbers:\n");
    complex_write(sum);

    printf("\nProduct of two complex numbers:\n");
    complex_write(product);

    return 0;
}
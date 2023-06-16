#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter Number1: ");
    scanf("%f", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &op);

    printf("Enter Number2: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

}

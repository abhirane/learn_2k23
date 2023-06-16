#include <stdio.h>

void printPattern1(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printPattern2(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printPattern1(i);
        printSpaces(2 * (n - i));
        printPattern2(i);
        printf("\n");
    }

    return 0;
}

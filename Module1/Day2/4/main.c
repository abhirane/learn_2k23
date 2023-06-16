#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int a[3] = {0x1, 0xF4, 0x10001};
    int totalBits = 0;
    int i;

    for (i = 0; i < 3; i++) {
        totalBits += countSetBits(a[i]);
    }

    printf("Total number of set bits: %d\n", totalBits);

    return 0;
}

#include <stdio.h>

struct Time {
    int hrs;
    int min;
    int sec;
};

struct Time calculateDifference(struct Time t1, struct Time t2) {
    struct Time difference;

    // Convert both time periods into seconds
    int t1Seconds = t1.hrs * 3600 + t1.min * 60 + t1.sec;
    int t2Seconds = t2.hrs * 3600 + t2.min * 60 + t2.sec;

    // Calculate the absolute difference in seconds
    int diffSeconds = t1Seconds - t2Seconds;
    if (diffSeconds < 0) {
        diffSeconds = -diffSeconds;
    }

    // Convert the difference back into hours, minutes, and seconds
    difference.hrs = diffSeconds / 3600;
    difference.min = (diffSeconds % 3600) / 60;
    difference.sec = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct Time t1, t2, difference;

    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);

    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);

    difference = calculateDifference(t1, t2);

    printf("\nDifference between the two time periods: %d hours %d minutes %d seconds\n",
           difference.hrs, difference.min, difference.sec);

    return 0;
}
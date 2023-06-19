#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        return 1;
    }
    return 0;
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    else
        return daysInMonth[month - 1];
}

int calculateElapsedDays(struct Date startDate, struct Date endDate) {
    int days = 0;

    // Calculate days for the start year
    for (int month = startDate.month + 1; month <= 12; month++)
        days += getDaysInMonth(month, startDate.year);

    days += getDaysInMonth(startDate.month, startDate.year) - startDate.day;

    // Calculate days for the years in between
    for (int year = startDate.year + 1; year < endDate.year; year++) {
        if (isLeapYear(year))
            days += 366;
        else
            days += 365;
    }

    // Calculate days for the end year
    for (int month = 1; month < endDate.month; month++)
        days += getDaysInMonth(month, endDate.year);

    days += endDate.day;

    return days;
}

int main() {
    struct Date startDate;
    startDate.day = 1;
    startDate.month = 1;
    startDate.year = 2023;

    struct Date endDate;
    endDate.day = 23;
    endDate.month = 6;
    endDate.year = 2025;

    int elapsedDays = calculateElapsedDays(startDate, endDate);

    printf("Number of days elapsed: %d\n", elapsedDays);

    return 0;
}

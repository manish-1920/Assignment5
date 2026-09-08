#include <stdio.h>

int main() {
    int day, month, year;
    int maxDays;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (year > 0) {
        if (month >= 1 && month <= 12) {

            if (month == 2) {
                if ((year % 400 == 0) ||
                    (year % 4 == 0 && year % 100 != 0)) {
                    maxDays = 29;
                } else {
                    maxDays = 28;
                }
            }
            else {
                if (month == 4 || month == 6 ||
                    month == 9 || month == 11) {
                    maxDays = 30;
                }
                else {
                    maxDays = 31;
                }
            }

            if (day >= 1 && day <= maxDays) {
                printf("Valid Date\n");
            }
            else {
                printf("Invalid Day\n");
            }
        }
        else {
            printf("Invalid Month\n");
        }
    }
    else {
        printf("Invalid Year\n");
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int day, month, year;
    int maxDays;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (year <= 0) {
        printf("Invalid Year\n");
        return 0;
    }

    switch (month) {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            maxDays = 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            maxDays = 30;
            break;

        case 2:
            if ((year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0)) {
                maxDays = 29;
            }
            else {
                maxDays = 28;
            }
            break;

        default:
            printf("Invalid Month\n");
            return 0;
    }

    if (day >= 1 && day <= maxDays) {
        printf("Valid Date\n");
    }
    else {
        printf("Invalid Day\n");
    }

    return 0;
}
*/
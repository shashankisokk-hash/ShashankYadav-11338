#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;
    int counter;
    int temp;

    printf("Enter total number of seconds: ");
    scanf("%d", &totalSeconds);

    counter = 0;
    temp = totalSeconds;

    for (int i = 1; i <= 3; i++) {
        if (i == 1) {
            hours = temp / 3600;
            temp = temp % 3600;
        } else if (i == 2) {
            minutes = temp / 60;
            temp = temp % 60;
        } else {
            seconds = temp;
        }
        counter++;
    }

    printf("\nUsing for loop:\n");
    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n", hours, minutes, seconds);
    printf("For loop counter: %d\n", counter);

    counter = 0;
    temp = totalSeconds;
    int step = 1;

    while (step <= 3) {
        if (step == 1) {
            hours = temp / 3600;
            temp = temp % 3600;
        } else if (step == 2) {
            minutes = temp / 60;
            temp = temp % 60;
        } else {
            seconds = temp;
        }
        counter++;
        step++;
    }

    printf("\nUsing while loop:\n");
    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n", hours, minutes, seconds);
    printf("While loop counter: %d\n", counter);

    printf("\nBoth loops give the same result.\n");

    return 0;
}
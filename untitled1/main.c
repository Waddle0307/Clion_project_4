#include <math.h>
#include <stdio.h>

int main(void) {
    double seconds;
    printf("Enter the amount of seconds: ");
    scanf("%lf", &seconds);
    double hour = seconds / 3600;
    double min = (hour - round(hour)) * 60;
    double sec = (min - round(min)) * 60;
    printf("%lf seconds is equal to %lf hours, %lf minutes, and %lf seconds.#", seconds, round(hour), round(min), round(sec));
    return 0;
}
#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

struct datetime {
    struct date d;
    struct time {
        int hour;
        int min;
        int sec;
    } t;
};

int main() {

    struct date current_date = {2020, .month=2, 25};

    /*
    current_date.year = 2020;
    current_date.month = 2;
    current_date.day = 25;
    */

    printf("Year: %i\n", current_date.year);
    printf("Month: %i\n", current_date.month);
    printf("Day: %i\n", current_date.day);

    struct date dates[] = {
        {2020, 2, 25}, {2020, 3, 26}, {2018, 4, 19}
    };

    for (int i=0; i<sizeof(dates)/sizeof(struct date); i++) {
        printf("%i-%i-%i\n", dates[i].year, dates[i].month, dates[i].day);
    }

    struct date *ptr = dates;
    (*ptr).year = 2015;
    ptr->month = 5;
    ptr->day = 25;

    printf("Year: %i\n", dates[0].year);
    printf("Month: %i\n", dates[0].month);
    printf("Day: %i\n", dates[0].day);

    printf("Year: %i\n", ptr[0].year);
    printf("Month: %i\n", ptr[0].month);
    printf("Day: %i\n", ptr[0].day);

    ptr += 1;

    printf("Year: %i\n", ptr->year);
    printf("Month: %i\n", ptr->month);
    printf("Day: %i\n", ptr->day);

    struct datetime dt = {2020, 12, 25, 12, 00, 00};
    printf("%i-%i-%i %i:%i:%i\n",
            dt.d.year, dt.d.month, dt.d.day,
            dt.t.hour, dt.t.min, dt.t.sec);

    return 0;
}

void print_remaining_days(int month, int day, int year)

{
    int days_in_month[] = (31, 28 + is_leap_year(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)
    int days_remaining = 0;

    for (int i = 0; i < month - 1; i++)
    {
        days_remaining += days_in_month[i];
    }
    days_remaining += day;

    if (month < 1 || month > 12 || day < 1 || day > days_in_month[month - 1])
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    printf("Day of the year: %d\n", days_remaining);
    printf("Remaining days: %d\n", 365 + is_leap_year(year) - days_remaining);
}

int is_leap_year(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return 1;
    } else {
        return 0;
    }

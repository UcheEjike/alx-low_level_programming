#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of year
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int days_in_year;

	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		days_in_year = 366;
		if (month > 2 && day >= 60)
		
			day++;
	}
	else
	{
		days_in_year = 365;
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
			return;
		}
	}

			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", days_in_year - day);
}

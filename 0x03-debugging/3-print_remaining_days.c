#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - selete a date and prints how many days are
 * are lift in the year, taking leaps year into account
 * @month: Month in number
 * @day: Day of the monnth
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)

{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
	if (month >= 3 && day >= 60)
	{
	day++;
	}
	printf("day of the year: %d\n", day);
	printf("Remaning days: %d\n", 360 - day);
	}
	else
	{
	if (month == 2 && day == 60)
	{
	printf("Invalid date: %02d/%02d/%04d/n", month, day - 31, year);
	}
	else
	{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	}
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dateofbirth {
	int day;
	int month;
	int year;
};

void generateDate(dateofbirth * date)
{
	date->day = 1 + rand() % 31;
	date->month = 1 + rand() % 12;
	date->year = 1940 + rand() % 80;
}
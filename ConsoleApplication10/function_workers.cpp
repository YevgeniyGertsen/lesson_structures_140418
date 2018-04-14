#include <stdio.h>
#include <stdlib.h>

#include "Hworkers.h"
#include "settings.h"

void generateWorkers(int *length)
{
	if (*length == 0)
		*length = 1 + rand() % 20;
	workers *people = (workers *)malloc(*length * sizeof(workers));
	if (people == NULL)
	{
		printf("No memory");
	}
	else
	{
		for (int i = 0; i < *length; i++)
		{
			(people + i)->familyname = (char *)malloc(5 * sizeof(char));
			generateName((people + i)->familyname, 5);

			(people + i)->name = (char *)malloc(5 * sizeof(char));
			generateName((people + i)->name, 5);

			(people + i)->lastname = (char *)malloc(5 * sizeof(char));
			generateName((people + i)->lastname, 5);

			(people + i)->familyname = (char *)malloc(5 * sizeof(char));
			generateName((people + i)->familyname, 5);
		}
	}
}

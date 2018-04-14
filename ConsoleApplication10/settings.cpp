#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum gender { male = 0, female = 1 };

void generateName(char *name, int length)
{
	if (length == 0)
		length = 1 + rand() % 6;

	for (int i = 0; i < length-1; i++)
	{
		if (i == 0)
			*(name + i) = (char)(65 + rand() % 24);
		else
			*(name + i) = (char)(97 + rand() % 24);
	}
	*(name + length) = '\0';
}

gender generateGender()
{
	return (gender)(0 + rand() % 2);
}

void generatePosition(char * sName)
{
	int rnd = 1 + rand() % 80;
	char srnd[3];

	itoa(rnd, srnd, 10);	
	strcat(sName, " #");
	strcat(sName, srnd);
}

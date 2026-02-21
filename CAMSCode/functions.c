#include "Header.h"

int rand_num(void)
{
	return rand() % 10 + 1; // Picks a random number from 1-10
}

void sentences(char adjective, char noun, char verb, int n)
{
	if (n == 1)
	{
		printf("Today I saw a %s dog carrying a %s while it %s down the street");
	}

	else if (n == 2)
	{
		printf("At the park, a %s squirrel found a %s and started to %s loudly");
	}

	else if (n == 3)
	{
		printf("The %s teacher picked up a %s and began to %s in front of the class");
	}

	else if (n == 4)
	{
		printf("Yesterday, I wore my %s shoes, grabbed a %s, and decided to %s with my friends");
	}

	else if (n == 5)
	{
		printf("One day, I woke up feeling very %s. I decided to make a sandwich using a %s piece of %s");
	}

	else if (n == 6)
	{
		
	}

	else if (n == 7)
	{

	}

	else if (n == 8)
	{

	}

	else if (n == 9)
	{

	}

	else
	{

	}
}
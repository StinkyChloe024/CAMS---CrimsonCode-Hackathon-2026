#include "Header.h"

int rand_num(void)
{
	return rand() % 10 + 1; // Picks a random number from 1-10
}

//void sentences(char adjective, char noun, char verb, int n)
void sentences(char adjective[15], char noun[15], char verb[15], int n)
{
	if (n == 1)
	{
		printf("Today I saw a %s dog carrying a %s while it %s down the street.\n", adjective, noun, verb);
	}

	else if (n == 2)
	{
		printf("At the park, a %s squirrel found a %s and started to %s loudly.\n", adjective, noun, verb);
	}

	else if (n == 3)
	{
		printf("The %s teacher picked up a %s and began to %s in front of the class.\n", adjective, noun, verb);
	}

	else if (n == 4)
	{
		printf("Yesterday, I wore my %s shoes, grabbed a %s, and decided to %s with my friends.\n", adjective, noun, verb);
	}

	else if (n == 5)
	{
		printf("One day, I woke up feeling very %s. I decided to make a sandwich using a %s piece of %s.\n", adjective, noun, verb);
	}

	else if (n == 6)
	{
		printf("A very %s %s learned how to %s while wearing pajamas.\n", adjective, noun, verb);
	}

	else if (n == 7)
	{
		printf("A very %s and slightly confused %s tried to %s on the roof.\n", adjective, noun, verb);
	}

	else if (n == 8)
	{
		printf("My extremely %s best friend’s %s loves to loudly %s at midnight.\n", adjective, noun, verb);
	}

	else if (n == 9)
	{
		printf("One ridiculously %s purple %s refused to %s in public.\n", adjective, noun, verb);
	}

	else
	{
		printf("The surprisingly %s dancing %s attempted to %s in the library.\n", adjective, noun, verb);
	}
}
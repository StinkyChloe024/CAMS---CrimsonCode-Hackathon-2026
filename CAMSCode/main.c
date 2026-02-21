#include "Header.h"

int main(void) 
{
	char name[15] = { '\0' };
	double radius = 0,
		   area = 0;

	printf("Welcome to the Game of the Wheel!1\n");

	printf("What is your name: ");
	scanf("%s", &name);

	printf("Welcome, %s, to the game!\n", name);

	printf("What is the radius of the circle: ");
	scanf(" %lf", &radius);

	area = pi * radius * radius;


}
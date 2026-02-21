#include "Header.h"

int main(void) 
{
	char adjective[15] = "",
		 noun[15] = "",
		 verb[15] = "";
	int n = 0;

	printf("Enter an adjective (present tense): ");
	scanf("%s", &adjective);

	printf("\nEnter a noun (present tense): ");
	scanf("%s", &noun);

	printf("\nEnter a verb (present tense): ");
	scanf("%s", &verb);

	srand((unsigned)time(NULL)); // needed to prevent rand_num() from generating the same number each time

	n = rand_num();

	sentences(adjective, noun, verb, n);

	return 0;
}
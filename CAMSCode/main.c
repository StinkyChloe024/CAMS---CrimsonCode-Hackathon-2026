#include "Header.h"

int main(void) 
{
	char adjective[15] = "",
		 noun[15] = "",
		 verb[15] = "";
	int n = 0;

	printf("Enter an adjective (past tense): ");
	scanf("%s", &adjective);

	printf("\nEnter a noun (past tense): ");
	scanf("%s", &noun);

	printf("\nEnter a verb (past tense): ");
	scanf("%s", &verb);

	n = rand_num();

	sentences(adjective, noun, verb, n);

	return 0;
}
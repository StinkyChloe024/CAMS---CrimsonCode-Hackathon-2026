#include "Header.h"

int main(void) 
{
	char adjective[15] = "",
		 noun[15] = "",
		 verb[15] = "";
	int n = 0;

	printf("Enter an adjective: ");
	scanf("%s", &adjective);

	printf("\nEnter a noun: ");
	scanf("%s", &noun);

	printf("\nEnter a verb: ");
	scanf("%s", &verb);

	n = rand_num();

	sentences(adjective, noun, verb, n);

	return 0;

	



}
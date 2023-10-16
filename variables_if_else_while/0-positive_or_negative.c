#include <stdlib.h>
#include <time.h>

/* Assign a random numer to the variable n each time it is executed */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0) {
		printf("is postive\n");
	} else if (n==0) {
		printf("is zero\n");
	} else (n<0) {
		printf("is negative\n");
	} 

	return 0;


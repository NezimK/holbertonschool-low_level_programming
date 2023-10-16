#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** more headers goes there
 * main - Assign a random numer to the variable n each time it is executed.
 * Return: 0
 */

int main(void) 
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0) {
	printf("is postive\n" );
	} else if(n == 0) {
	printf("is zero\n" );
	} else if(n < 0) {
	printf("is negative\n" );
	} 
	return (0);
}

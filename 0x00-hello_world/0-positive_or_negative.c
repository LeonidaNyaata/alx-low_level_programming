#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc fr function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes there*/
	if (n < 0)
	{
		printf("Number is negative " % d\n"", n);
	}
	else if (n > 0)
		printf("Number is positive " % d\n"", n);
	else
		printf("Number is zero " % d\n"", n);
	return (0);
}

#include <stdio.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0) {
		printf("%d\n is zero", n);
	}
	else if (n < 0) {
		printf("%d\n is negative", n);
	}
	else {
		printf("%d\n is positve", n);
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	int n, square;

	printf("ｎ的平方表\n");
	printf(" n    n^2\n");
	printf("---   ---\n");

	n = 0;

	for(n = 1; n <= 10; ++n) {
		square = n * n;
		printf("%2i    %i\n", n, square);
	}

	return 0;
}

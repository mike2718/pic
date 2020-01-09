#include <stdio.h>

int main(void)
{
	unsigned int next_multiple1;
	unsigned int next_multiple2;
	unsigned int next_multiple3;
	printf("next_multiple1 = %i\n", 365 + 7 - 365 % 7);
	printf("next_multiple2 = %i\n", 12258 + 23 - 12258 % 23);
	printf("next_multiple3 = %i\n", 996 + 4 - 996 % 4);

	return 0;
}

#include <stdio.h>

int main()
{
	int num = 11111000;

	// ~num yields 1s complement of num
	printf("1s complement of %d = %d\n", num, (~num));

	// (~num + 1) yields 2s complement of num
	printf("2s complement of %d = %d\n", num, (~num + 1));

	return 0;
}
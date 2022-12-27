#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = (int *)malloc(100 * sizeof(int));

	free(p);
	return (0);
}
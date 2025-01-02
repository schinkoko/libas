#include <ctype.h>

#include "libas.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

	int i;
	int *pointer = malloc(20);
	char *st = as_memset(pointer, '9', 10);

	for (i = 0; i < 20; i++) {
		printf("%d", st[i]);
	}

	printf("\n%d\n", as_atoi(st));
	free(pointer);
	return 0;
}

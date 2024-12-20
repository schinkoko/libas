#include "libas.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

	char str[15] = "12";

	int i;
	int *pointer = malloc(20);
	char *st = as_memset(pointer, 5, 10);

	for (i = 0; i < 20; i++) {
		printf("%d", st[i]);
	}
	printf("\n");
	st = as_memset(pointer, 0, 20);
	for (i = 0; i < 20; i++) {
		printf("%d", st[i]);
	}
	printf("\n%lu\n", as_strlen(str));
    printf("%d\n", as_atoi(str));
    free(pointer);
    return 0;
}

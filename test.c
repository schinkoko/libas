#include "libas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i;
	int *pointer1 = malloc(30);
	int *pointer2 = (int *)((char *)pointer1 + 20);// malloc(20);

	for (i = 0; i < 30; i++)
		as_memset(&((char*)pointer1)[i], i, 1);
	//as_memset(pointer2, '0', 10);

	for (i = 0; i < 20; i++) {
		printf("%d ", ((char *)pointer1)[i]);
	}
	printf("\n");
	for (i = 0; i < 20; i++) {
		printf("%d ", ((char *)pointer2)[i]);
	}
	printf("\n");

	//char *st = &((char *)pointer1)[5];
	//st[5] = 1;
	pointer2 = as_memcpy(pointer2, pointer1, 20);

	for (i = 0; i < 20; i++) {
		printf("%d ", ((char *)pointer1)[i]);
	}
	printf("\n");
	for (i = 0; i < 20; i++) {
		printf("%d ", ((char *)pointer2)[i]);
	}

	//printf("\n%d\n", as_atoi(st));

	free(pointer1);
	//free(pointer2);
	return 0;
}

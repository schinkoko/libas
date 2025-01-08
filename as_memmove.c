#include "libas.h"

void *as_memmove(void *dest, const void *src, size_t n) {

	void *tmp = malloc(n);
	tmp = as_memcpy(tmp, src, n);
	dest = as_memcpy(dest, tmp, n);
	free(tmp);
	return dest;
}
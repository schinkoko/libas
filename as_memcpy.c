#include "libas.h"

void *as_memcpy(void *dest, const void *src, size_t n) {

	size_t i = 0;
	if ((size_t)as_abs((intptr_t)dest - (intptr_t)src) >= n) {
		while (i < n) {
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return dest;
}
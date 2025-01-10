#include "libas.h"

size_t as_strlcpy(char *dst,const char *src, size_t size) {

	if (!size)
		return 0;
	if (!dst || !src) {
		AS_ERROR(AS_ERROR_NULLPTR);
		return 0;
	}

	size_t i = 0;
	while (i < size) {

		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return as_strlen(dst);
}
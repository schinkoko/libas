#include "libas.h"

void as_bzero(void *s, size_t n) {

	as_memset(s, 0, n);
}
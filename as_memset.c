#include "libas.h"

void *as_memset(void *s, int c, size_t n) {

	unsigned char *p = s;

	c = (unsigned char) c;
	while(n--) {

		*p = c;
		p++;
    }
	return s;
}
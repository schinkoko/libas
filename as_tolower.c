#include "libas.h"

int as_tolower(int c) {

	if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 'a';
	return c;
}
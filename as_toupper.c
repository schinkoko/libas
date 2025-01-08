#include "libas.h"

int as_toupper(int c) {

	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	return c;
}
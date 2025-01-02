#include "libas.h"

int as_isprint(int c) {

	if (c >= 0x20 && c <= 0x7E)
		return 1;
	return 0;
}
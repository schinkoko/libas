#include "libas.h"

int as_isalpha(int c) {

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	return 0;
}
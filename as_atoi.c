#include "libas.h"

size_t as_strlen(const char *str) {

	size_t len = 0;

	while (str[len] != '\0')
		len++;
	return len;
}

int as_atoi(const char *str) {

	int c, i = 0;

	for (c = as_strlen(str); str[c] != '\0'; c--) {

		if (str[c] < '0' || str[c] > '9') {


		}
		else {

			i = 0;
		}
	}
	return i;
}
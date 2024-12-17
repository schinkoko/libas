#include "libas.h"

int as_atoi(const char *str) {

	int res = 0, sign = 1, ind = 0;

	while (str[ind] == ' ')
		ind++;

	if (str[ind] == '+' || str[ind] == '-') {
		if (str[ind] == '-')
			sign = -1;
	}

	while (str[ind] >= '0' && str[ind] <= '9')
		res = 10 * res + (str[ind++] - '0');

	return res * sign;
}
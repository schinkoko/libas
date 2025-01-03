#include "libas.h"
#include <stdio.h>

const char *as_error_str(as_error_t err) {

	const char *err_str = NULL;

	if (err >= AS_ERROR_COUNT)
		return err_str;
	err_str = AS_ERROR_STRS[err];
	return err_str;
}

void as_error(as_error_t err) {

	printf("The was an error of type: %s\nin file: %s\nat line: %d", as_error_str(err), __FILE__, __LINE__);
}
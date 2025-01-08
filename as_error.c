#include "libas.h"
#include <stdio.h>

const char *AS_ERROR_STRS[] = {

	"AS_ERROR_OK = 0",
	"AS_ERROR_NULLPTR",
	"AS_ERROR_INVARG",
	"AS_ERROR_NOMEM",
	"AS_ERROR_UNKNOWN"
};

_Static_assert(sizeof(AS_ERROR_STRS) / sizeof(AS_ERROR_STRS[0]) == AS_ERROR_COUNT,
			   "Numer of error codes is not aligned with the number of error types ");

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
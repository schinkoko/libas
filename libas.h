#ifndef LIBAS_H
#define LIBAS_H

#define NULL ((void *)0)

typedef long unsigned int size_t;
typedef long long intptr_t;

typedef enum as_error_e {

	AS_ERROR_OK = 0, // No error
	AS_ERROR_NULLPTR, // Nullptr detected
	AS_ERROR_INVARG, // Invalid argument
	AS_ERROR_NOMEM, // No memory left for allocation
	AS_ERROR_UNKNOWN, // Unknown error
	AS_ERROR_COUNT // Amount of errors
} as_error_t;

const char	*AS_ERROR_STRS[] = {

	"AS_ERROR_OK = 0",
	"AS_ERROR_NULLPTR",
	"AS_ERROR_INVARG",
	"AS_ERROR_NOMEM",
	"AS_ERROR_UNKNOWN"
};

_Static_assert(sizeof(AS_ERROR_STRS)/sizeof(AS_ERROR_STRS[0]) == AS_ERROR_COUNT, "Numer of error codes is not aligned with the number of error types ");

const char	*as_error_str(as_error_t err);
void	as_error(as_error_t err);
int		as_abs(int c);
int		as_isalpha(int c);
int		as_isdigit(int c);
int		as_isalnum(int c);
int		as_isascii(int c);
int		as_isprint(int c);
size_t	as_strlen(const char *str);
void	*as_memset(void *s, int c, size_t n);
void	as_bzero(void *s, size_t n);
void	*as_memcpy(void *dest, const void *src, size_t n);
void	*as_memmove(void *dest, const void *src, size_t n);
int		as_atoi(const char *str);

#endif // LIBAS_H
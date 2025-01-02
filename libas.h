#ifndef LIBAS_H
#define LIBAS_H

typedef long unsigned int size_t;
typedef long long intptr_t;

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
int		as_atoi(const char *str);

#endif // LIBAS_H
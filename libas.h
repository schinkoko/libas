#ifndef LIBAS_H
#define LIBAS_H

typedef long unsigned int size_t;

int as_isalpha(int c);
int as_isdigit(int c);
int as_isalnum(int c);
int as_isascii(int c);
int as_isprint(int c);

size_t as_strlen(const char *str);

int as_atoi(const char *str);

void *as_memset(void *s, int c, size_t n);

#endif // LIBAS_H
#ifndef LIBAS_H
#define LIBAS_H

typedef long unsigned int size_t;

size_t as_strlen(const char *str);

int as_atoi(const char *str);

void *as_memset(void *s, int c, size_t n);

#endif // LIBAS_H
#include "libas.h"
#include <stdio.h>

int main() {
    char str[15] = "12";
    printf("%lu\n", as_strlen(str));
    printf("%d\n", as_atoi(str));
    return 0;
}
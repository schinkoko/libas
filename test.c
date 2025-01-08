#include "libas.h"

int main() {

	int i;
	char stroing1[] = "Halloliebeleutewiegehtseuch";
	char stroing2[] = "ichversteheesnicht         ";
	char *str1 = malloc(as_strlen(stroing1) + 1);
	char *str2 = malloc(as_strlen(stroing2) + 1);
	as_memcpy(str1, stroing1, as_strlen(stroing1) + 1);
	as_memcpy(str2, stroing2, as_strlen(stroing2) + 1);

	printf("%s\n", str1);
	printf("%s\n", str2);

	as_memmove(str2, str1, as_strlen(str1));

	for (i = 0; i < as_strlen(str1); i++)
		str1[i] = (char)as_toupper(str1[i]);

	printf("%s\n", str1);
	printf("%s\n", str2);

	for (i = 0; i < as_strlen(str1); i++)
		str1[i] = (char)as_tolower(str1[i]);

	printf("%s\n", str1);
	printf("%s\n", str2);

	free(str1);
	free(str2);
	return 0;
}

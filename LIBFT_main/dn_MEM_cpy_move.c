#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char *a;
	char *b;

	a = strdup("kontrol");
	b = strdup("kontrol");
	printf("kontrol\n");
	printf("%s\n", memmove(a, &a[2], 7));
	printf("%s", memcpy(b, &b[2], 7));
}

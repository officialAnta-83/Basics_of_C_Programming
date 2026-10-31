#include <stdio.h>

int main(void)
{
	int i, len = 0;
	char temp;
	char a[200];

	printf("\nEnter a string:\n");
	if (fgets(a, sizeof(a), stdin) == NULL) {
		return 1;
	}

	while (a[len] != '\0' && a[len] != '\n') {
		len++;
	}
	a[len] = '\0';

	for (i = 0; i < len / 2; i++) {
		temp = a[i];
		a[i] = a[len - 1 - i];
		a[len - 1 - i] = temp;
	}

	printf("\nThe new string is:\n%s\n", a);
	return 0;
}
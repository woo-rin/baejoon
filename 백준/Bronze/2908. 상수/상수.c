#include <stdio.h>

int main() {
	char sa[4], sb[4];
	scanf("%s %s", &sa, &sb);

	int a = 0;
	int b = 0;

	for (int i = 2; i >= 0; --i) {
		a = a * 10 + sa[i] - '0';
		b = b * 10 + sb[i] - '0';
	}

	printf("%d\n", a > b ? a : b);
	return 0;
}
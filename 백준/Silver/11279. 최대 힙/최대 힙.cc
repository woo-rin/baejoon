#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
/*
11279_최대 힙
1500KB	20ms
*/
#include <cstdio>

const int LM = 100001; // 1 base
int h[LM], hn, c;

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

void push(int v) {
	h[++hn] = v;
	for (c = hn; c > 1; c >>= 1) {
		if (h[c] > h[c >> 1]) swap(h[c], h[c >> 1]);
		else break;
	}
}

int pop() {
	if (hn == 0) return 0;

	int v = h[1];
	h[1] = h[hn--];
	for (c = 2; c <= hn; c <<= 1) {
		c += (c <= hn && h[c] < h[c + 1]);

		if (h[c] > h[c >> 1]) swap(h[c], h[c >> 1]);
		else break;
	}
	return v;
}

int main() {
	int n, x;

	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		if (x == 0) printf("%d\n", pop());
		else push(x);
	}
	return 0;
}
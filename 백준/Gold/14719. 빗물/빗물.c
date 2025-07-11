#include <stdio.h>

int main() {
    int h, w;
    scanf("%d %d", &h, &w);

    int block[w];
    for (int i = 0; i < w; i++) {
        scanf("%d", &block[i]);
    }

    int answer = 0;

    for (int i = 1; i < w - 1; i++) {
        int left = 0, right = 0;

        // 왼쪽 최대값
        for (int j = 0; j < i; j++) {
            if (block[j] > left) {
                left = block[j];
            }
        }

        // 오른쪽 최대값
        for (int j = i + 1; j < w; j++) {
            if (block[j] > right) {
                right = block[j];
            }
        }

        int min = left < right ? left : right;
        if (min > block[i]) {
            answer += min - block[i];
        }
    }

    printf("%d\n", answer);
    return 0;
}

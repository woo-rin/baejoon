#include <stdio.h>

int main() {
    int arr[100][100] = {0};
    int n, r, c;
    int ans = 0;

    scanf("%d", &n);

    for(int k = 0; k < n; k++) {
        scanf("%d %d", &r, &c);
        for(int i = r; i < r + 10; i++) {
            for(int j = c; j < c + 10; j++) {
                arr[i][j] += 1;
                if(arr[i][j] == 1) {
                    ans += 1;
                }
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}

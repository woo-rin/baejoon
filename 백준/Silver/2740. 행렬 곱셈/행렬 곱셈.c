#include <stdio.h>
 
int main() {
    int n, m,k;
    int first[101][101] = {0,};
    int second[101][101] = { 0, };
    int result[101][101] = { 0, };
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }
    scanf("%d %d", &m, &k);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int k = 0; k < m; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

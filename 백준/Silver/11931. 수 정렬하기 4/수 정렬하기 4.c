#include <stdio.h>
#include <stdlib.h>

int compare_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int *num = malloc(n * sizeof(int));
    if (num == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    qsort(num, n, sizeof(int), compare_desc);

    for (int i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }

    free(num);
    return 0;
}

#include <stdio.h>

int ary[1000000];

int compare(const void* a, const void* b)
{
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 > num2) return 1;
    if (num1 < num2) return -1;
    return 0;
}

int main(void) {

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    qsort(ary, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ary[i]);
    }
    
    return 0;
}
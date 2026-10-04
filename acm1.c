#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), cmp);

    int s = 0;
    for (int i = 0; i < n; i++) {
        if (s >= arr[i])
            s++;
        else
            s--;
    }

    printf("%d\n", s);

    free(arr);
    return 0;
}
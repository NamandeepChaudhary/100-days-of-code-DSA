#include <stdio.h>

int main() {
    int p, q;
    int a[100], b[100], merged[200];
    int i = 0, j = 0, k = 0;

    // Input for first log
    scanf("%d", &p);
    for (i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Input for second log
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;

    // Merge both sorted logs
    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements of first log
    while (i < p) {
        merged[k++] = a[i++];
    }

    // Copy remaining elements of second log
    while (j < q) {
        merged[k++] = b[j++];
    }

    // Output merged log
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

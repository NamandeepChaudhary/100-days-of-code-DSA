#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prefix_sum = 0;
    int count = 0;

    int freq[2 * MAX + 1] = {0};

    for(int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        if(prefix_sum == 0)
            count++;

        if(freq[prefix_sum + MAX] > 0)
            count += freq[prefix_sum + MAX];

        freq[prefix_sum + MAX]++;
    }

    printf("%d\n", count);

    return 0;
}
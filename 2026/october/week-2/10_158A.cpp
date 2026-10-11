#include <stdio.h>

int main() {
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    int a[n], count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if ((a[i] >= a[k-1]) && (a[i] > 0)) count++;
    }
    
    printf("%d\n", count);
    return 0;
}
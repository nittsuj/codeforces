#include <stdio.h>

int main() {
    int n = 0, fence_height = 0;

    scanf("%d %d", &n, &fence_height);

    int contestant_height = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &contestant_height);

        if (contestant_height > fence_height) count += 2;
        else count += 1;
    }
    printf("%d\n", count);
    return 0;
}
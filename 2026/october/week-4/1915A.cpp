#include <stdio.h>

#define MAX_COLUMN 3


int main() {
    int n = 0;
    scanf("%d", &n);
    
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        int result = a ^ b ^ c;
        printf("%d\n", result);
    }
    return 0;
}

#include <stdio.h>

int solve(int n) {
    if (n == 1) return 0;
    
    int result = 0;
    if (n % 6 == 0) {
        result = solve(n/6);
        return (result == -1) ? -1 : result + 1;
    }
    else if (n % 3 == 0) {
        result = solve(n*2);
        return (result == -1) ? -1 : result + 1;
    }
    else return 1;
}

int main() {
    int n = 0;
    scanf("%d", &n);

    unsigned long long input = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        printf("%d\n", solve(input));
    }
}

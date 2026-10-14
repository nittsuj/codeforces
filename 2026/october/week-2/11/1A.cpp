#include <stdio.h>

unsigned long long n = 0, m = 0, a = 0;

unsigned long long func_ceil(int a, int b) {
    return (a + b - 1) / b;
}

int main() {
    scanf("%llu %llu %llu", &n, &m, &a);
    if ((n <= 0) && (m <= 0) && (a <= 0)) return 0;
    unsigned long long side_n = func_ceil(n,a), side_m = func_ceil(m,a), result = side_n*side_m;
    printf("%llu\n", result);
    return 0;
}
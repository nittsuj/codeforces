#include <stdio.h>
#include <math.h>

#define RATIO_A 3
#define RATIO_B 2

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int result_a = 0, result_b = 0;
    int iteration = 1;
    int flag = 0;
    while (1) {
        result_a = a * (int) pow(RATIO_A, iteration-1);
        result_b = b * (int) pow(RATIO_B, iteration-1);
        if (result_a > result_b) break; 
        iteration++;
    }
    printf("%d\n", iteration-1);
}
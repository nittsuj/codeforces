#include <stdio.h>

#define ROWS 3

int main() {
    int n = 0;
    scanf("%d", &n);

    int matrix[3][n] = {0};

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int count = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            count += matrix[i][j];
        }
    }

    printf("%s\n", (count == 0) ? "YES" : "NO");
    return 0;
}
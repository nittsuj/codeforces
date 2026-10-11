#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5

int matrix[ROWS][COLS];

int main() {
    int matrix[ROWS][COLS];

    int row_target = 2,
    column_target = 2;
    int row_locked = 0,
    column_locked = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == 1) {
                row_locked = i;
                column_locked = j;
                break;
            }
        }
    }
    int row_min = abs(row_target-row_locked),
        column_min = abs(column_target-column_locked); 
    printf("%d\n", row_min+column_min);
}
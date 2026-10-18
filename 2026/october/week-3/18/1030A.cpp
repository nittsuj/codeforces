#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    int opinion = 0, count = 0;

    for (int i = 0; i < num; i++) {
        scanf("%d", &opinion);
        count += opinion;
    }

    printf("%s\n", (count > 0) ? "HARD" : "EASY");
}
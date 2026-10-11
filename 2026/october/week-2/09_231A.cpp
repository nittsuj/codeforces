#include <stdio.h>

int main() {
    int problem = 0;
    scanf("%d", &problem);

    int petya = 0, vasya = 0, tonya = 0;
    int take_it = 0;
    for (int i = 0; i < problem; i++) {
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if (petya+vasya+tonya >= 2) take_it++;
    }
    printf("%d\n", take_it);
}
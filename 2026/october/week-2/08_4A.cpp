#include <stdio.h>
#include <string.h>

int main() {
    int watermelons = 0;
    scanf("%d", &watermelons);
    printf("%s", ((watermelons > 2) && (watermelons % 2 == 0)) ? "YES" : "NO");
    return 0;
}
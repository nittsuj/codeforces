#include <stdio.h>
int main() {
    long long dollars = 0,
            bananas = 0,
            unit_price = 0;

    scanf("%d %d %d", &unit_price, &dollars, &bananas);
    
    long long remaining = unit_price * bananas * (bananas + 1) / 2;
    remaining -= dollars;
    if (remaining > 0) {
        printf("%lld\n", remaining);
    }
    else printf("0\n");
    return 0;
}
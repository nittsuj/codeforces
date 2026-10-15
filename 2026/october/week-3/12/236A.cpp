#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    scanf("%s", string);

    int alphabet[27] = {0};

    for (int i = 0; string[i] != '\0'; i++) {
        alphabet[string[i] - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > 0) count++;
    }
    
    printf("%s\n", (count % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");   
}
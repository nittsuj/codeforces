#include <stdio.h>
#include <ctype.h>
#include <string.h>

int lower_case(char *string);

int main() {
    char string_1[101], string_2[101];
    scanf("%s %s", &string_1, &string_2);
    lower_case(string_1);
    lower_case(string_2);
    printf("%d", strcmp(string_1, string_2));
    return 0;
}

int lower_case(char *string) {
    for (int i = 0; string[i]; i++) {
        if (string[i] >= 65 && string[i] <= 90)
            string[i] = tolower(string[i]);
    }
}
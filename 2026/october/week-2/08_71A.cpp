#include <stdio.h>
#include <string.h>

int main() {
    int n_words;
    scanf("%d", &n_words);

    char words[101];

    int insert_positioning = 2;
    for (int i = 0; i < n_words; i++) {
        scanf("%s", words);

        int len = strlen(words);
        int middle_len = len-2;
        if (len > 10) {
            printf("%c%d%c\n", words[0],middle_len, words[len-1]);
        }
        else printf("%s\n", words);
    }
    return 0;
}